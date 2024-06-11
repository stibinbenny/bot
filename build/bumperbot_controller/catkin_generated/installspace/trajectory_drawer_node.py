#!/usr/bin/env python3
import rospy
from nav_msgs.msg import Path, Odometry
from geometry_msgs.msg import PoseStamped

class TrajectoryDrawer(object):

    def __init__(self):
        odom_topic = rospy.get_param("odom_topic", "bumperbot_controller/odom")
        self.trajectory_pub_ = rospy.Publisher("bumperbot_controller/trajectory", Path, queue_size=10)
        self.odom_sub_ = rospy.Subscriber(odom_topic, Odometry, self.odometryCallback)
        self.trajectory_ = Path()

    def odometryCallback(self, msg):
        self.trajectory_.header.frame_id = msg.header.frame_id
        curr_pose = PoseStamped()
        curr_pose.header.frame_id = msg.header.frame_id
        curr_pose.header.stamp = msg.header.stamp
        curr_pose.pose = msg.pose.pose
        self.trajectory_.poses.append(curr_pose)
       
        self.trajectory_pub_.publish(self.trajectory_)
   
if __name__ == '__main__':
    
    rospy.init_node('trajectory_drawer')
    trajectory_drawer = TrajectoryDrawer()

    rospy.spin() 