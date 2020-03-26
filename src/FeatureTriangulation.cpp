#include "../include/target_tracking/FeatureTriangulation.hpp"

#include <iostream>
#include <ros/ros.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
//#include <sensor_msgs/CameraInfo.h>             //for sensor_msgs
//#include <image_transport/image_transport.h>    //for ImageConstPtr&
#include <string>


using namespace cv;

namespace target_tracking {

//constructor initialization
FeatureTriangulation::FeatureTriangulation(ros::NodeHandle& nodeHandle)
    : nodeHandle_(nodeHandle)                                                //initializing nodeHandle
{
    /*          //PRODUCES ERROR, LEAVE AS COMMENT
     *
    if (!readParameters()) {
        ROS_ERROR("Could not read parameters.");
        ros::requestShutdown();
    }
    */

    subscriber_ = nodeHandle_.subscribe("/cam0/image_rect", 5,
                                        &FeatureTriangulation::imageCallback, this);
    ROS_INFO("Successfully launched node.");
}

//destructor
FeatureTriangulation::~FeatureTriangulation()
{
}


/*              //UNNECESSARY FOR THE MOMENT

bool FeatureTriangulation::readParameters()
{
    if (!nodeHandle_.getParam("/cam0/image_rect", subscriberTopic_)) return false;
    return true;
}
*/


void FeatureTriangulation::imageCallback(const sensor_msgs::ImageConstPtr& msg) {
    ROS_INFO("Function worked");
}



} /* namespace */

