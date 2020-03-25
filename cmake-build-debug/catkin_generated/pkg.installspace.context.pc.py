# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;roslib;cv_bridge;image_transport;sensor_msgs;geometry_msgs;message_generation".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ltarget_tracking_core".split(';') if "-ltarget_tracking_core" != "" else []
PROJECT_NAME = "target_tracking"
PROJECT_SPACE_DIR = "/usr/local"
PROJECT_VERSION = "0.0.0"
