import rclpy 
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSReliabilityPolicy, QoSDurabilityPolicy

from std_msgs.msg import String
from geometry_msgs.msg import Twist
from my_interface.msg import Mytopic


class Myinterface_sub(Node):
    def __init__(self):
        super().__init__('myinterface_sub')
        self.qos_profile = QoSProfile(depth=10)
        self.pub = self.create_subscription(Mytopic, 'myfloat', self.sub_time, self.qos_profile)
 

    def sub_time(self, msg):
        self.get_logger().info(f'Recieved time : {msg.stamp.sec} : {msg.stamp.nanosec}')
        self.get_logger().info(f'Received frame_id : {msg.my_float}')



def main(args = None):
    rclpy.init(args=args)
    node = Myinterface_sub()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard Interrupt!!')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()