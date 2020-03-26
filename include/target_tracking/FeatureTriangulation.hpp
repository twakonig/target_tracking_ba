

#ifndef TARGET_TRACKING_FEATURETRIANGULATION_HPP
#define TARGET_TRACKING_FEATURETRIANGULATION_HPP

#include <ros/ros.h>
#include <sensor_msgs/CameraInfo.h>             //for sensor_msgs
#include <image_transport/image_transport.h>    //for ImageConstPtr&

namespace target_tracking {


    class FeatureTriangulation {
    public:
        //constructor
        FeatureTriangulation(ros::NodeHandle& nodeHandle);

        //destructor
        virtual ~FeatureTriangulation();

    private:

      //  bool readParameters();

        void imageCallback(const sensor_msgs::ImageConstPtr& msg);

        //! ROS node handle, private
        ros::NodeHandle& nodeHandle_;

        //! ROS topic subscriber.
        ros::Subscriber subscriber_;

        //! ROS topic name to subscribe to.
        //std::string subscriberTopic_;

    };

} /* namespace */

#endif //TARGET_TRACKING_FEATURETRIANGULATION_HPP
