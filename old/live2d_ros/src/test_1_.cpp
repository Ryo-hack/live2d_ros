#include <ros/ros.h>
#include <std_msgs/String.h>

#include "../../../../CubismNativeSamples-4-r.1/Samples/Cocos2d-x/Demo/Classes/AppDelegate.h"

void chatterCallback(const std_msgs::String& msg)
{
  ROS_INFO("subscribe: %s", msg.data.c_str());
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "basic_simple_listener");
  ros::NodeHandle nh;
  ros::Subscriber sub = nh.subscribe("chatter", 10, chatterCallback);
  ros::spin();
  
  AppDelegate app;
  return Application::getInstance()->run();

}