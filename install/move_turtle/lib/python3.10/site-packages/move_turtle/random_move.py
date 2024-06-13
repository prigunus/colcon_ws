import rclpy 
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy, QoSReliabilityPolicy, QoSDurabilityPolicy

from std_msgs.msg import String
from geometry_msgs.msg import Twist

class TurtleM_pub(Node):
    def __init__(self):
        super().__init__('simple_mpub')
        self.qos_profile = QoSProfile(depth=10)
        self.pub = self.create_publisher(Twist, 'turtle1/cmd_vel', self.qos_profile)
        
        self.timer = self.create_timer(0.1, self.Twist_msg)
        self.update_timer = self.create_timer(0.05, self.update)
        self.speed = 2.0
        self.dir = 3.0

    def Twist_msg(self):
        msg = Twist()
        msg.linear.x = self.speed
        msg.linear.y = 0.0
        msg.linear.z = 0.0
        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = self.dir

        self.pub.publish(msg)

    def update(self):
        self.speed += 0.1
        if self.speed > 10 :
            self.speed -= 0.1
            self.dir = -3.0
        elif self.speed < 0:
            self.dir = 3.0 



def main(args = None):
    print("start")
    rclpy.init(args=args)
    node = TurtleM_pub()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard Interrupt!!')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()