cmake_minimum_required(VERSION 3.0.2)
project(bumperbot_localization)

find_package(catkin REQUIRED COMPONENTS
  rospy
  nav_msgs
  sensor_msgs
)


catkin_package(
  INCLUDE_DIRS 
  CATKIN_DEPENDS
  rospy
  nav_msgs
  sensor_msgs

)
catkin_python_setup()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

catkin_install_python(PROGRAMS
   nodes/kalman_filter_node.py
   nodes/imu_republisher_node.py
   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
 )

