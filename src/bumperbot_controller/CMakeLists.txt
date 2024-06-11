cmake_minimum_required(VERSION 3.0.2)
project(bumperbot_controller)

find_package(catkin REQUIRED COMPONENTS
  rospy
  std_msgs
  geometry_msgs
  sensor_msgs
  tf2_ros
  nav_msgs
)



catkin_python_setup()

catkin_package(

  CATKIN_DEPENDS
    std_msgs
    geometry_msgs
    sensor_msgs
    tf2_ros
    nav_msgs
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  
)

catkin_install_python(PROGRAMS 
  nodes/simple_controller_node.py
  nodes/trajectory_drawer_node.py
  nodes/noisy_controller_node.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

