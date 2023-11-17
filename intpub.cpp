#include "ros/ros.h"
#include "std_msgs/Int16.h"


int main(int argc, char **argv)
{
 
  ros::init(argc, argv, "int_pub_node");


  ros::NodeHandle n;

  ros::Publisher int_pub = n.advertise<std_msgs::Int16>("integer", 1000);

  ros::Rate loop_rate(10);
   for (int i = 20; i <= 100; i++)
    {
        std::cout<<"int number =" <<i<< std::endl;
        
    }

    std_msgs::Int16 msg;
    msg.data ;
   
    ROS_INFO("%d", msg.data);
    int_pub.publish(msg); 


    
  int count = 0;
  while (ros::ok())
  {

    ros::spinOnce();

    loop_rate.sleep();
   
  }


  return 0;
}