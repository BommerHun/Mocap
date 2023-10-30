import sys
import motioncapture
import asyncio
from PyQt5.QtWidgets import QApplication, QWidget, QHBoxLayout, QVBoxLayout, QLabel, QShortcut
from PyQt5.QtCore import Qt, QPoint
from PyQt5.QtGui import QKeySequence
##ROS2 importok:
import rclpy
from drive_bridge_msg.msg import InputValues
from mocap_msg.msg import PosValue
from std_msgs.msg import Float64
from rclpy.node import Node
class MocapSubscriber(Node):

    def __init__(self):
        super().__init__('mocap_subscriber')
        self.subscription = self.create_subscription(
            PosValue,
            '/mocap',
            self.listener_callback,
            1)

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.name)
class ControlPublisher(Node):
    def __init__(self):
        super().__init__("control")
        self.command_pub = self.create_publisher(InputValues, "/control",1)
        print("control node inicializalva")

class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.kerekallas = 0.5

        rclpy.init()
        ##ROS2 node létrehozása
        self.node = ControlPublisher()

        self.window_width, self.window_height = 1200, 800
        self.setMinimumSize(self.window_width, self.window_height)
        self.label = QLabel(self)
        self.label.setText('Welcome')
        self.label.move(150, 150)

        QShortcut(QKeySequence(Qt.Key_Left), self, activated=self.move_left)
        QShortcut(QKeySequence(Qt.Key_Right), self, activated=self.move_right)
        QShortcut(QKeySequence(Qt.Key_Up), self, activated=self.move_up)
        QShortcut(QKeySequence(Qt.Key_Down), self, activated=self.move_down)
        #rclpy.spin(self.sub_node)


    def move_left(self):

        if self.kerekallas > 0.5:
            self.label.setText("egyenes")
            self.kerekallas = 0.5
            msg = InputValues()
            msg.delta = 0.5
            msg.d = 0.0
        else:
            self.label.setText("balra")
            self.kerekallas = 0.1
            msg = InputValues()
            msg.delta = 0.1
            msg.d = 0.0
        self.node.command_pub.publish(msg)
        print("Puslishing: ", msg.delta, " ", msg.d )

    def move_right(self):

        if self.kerekallas < 0.5:
            self.label.setText("egyenes")
            self.kerekallas = 0.5
            msg = InputValues()
            msg.delta = 0.5
            msg.d = 0.0
        else:
            self.label.setText("jobbra")
            self.kerekallas = 0.9
            msg = InputValues()
            msg.delta = 0.9
            msg.d = 0.0
        self.node.command_pub.publish(msg)
        print("Puslishing: ", msg.delta, " ", msg.d )

    def move_up(self):
        self.label.setText("elore")
        msg = InputValues()
        msg.delta = self.kerekallas
        msg.d = 0.05
        self.node.command_pub.publish(msg)
        print("Puslishing: ", msg.delta, " ", msg.d )
        ##self.node.get_logger().info('Publishing: "%s"' % msg.delta)

    def move_down(self):
        self.label.setText("hatra")
        msg = InputValues()
        msg.delta = self.kerekallas
        msg.d = -0.05
        self.node.command_pub.publish(msg)
        print("Puslishing: ", msg.delta, " ", msg.d )
def main():
        app = QApplication(sys.argv)
        app.setStyleSheet('''
            QWidget {
                font-size: 45px;
            }
        ''')

        myApp = MyApp()
        myApp.show()

        try:
            sys.exit(app.exec_())
        except SystemExit:
            print('Closing Window...')

if __name__ == '__main__':
    # don't auto scale when drag app to a different monitor.
    # QApplication.setAttribute(Qt.HighDpiScaleFactorRoundingPolicy.PassThrough)
    main()
