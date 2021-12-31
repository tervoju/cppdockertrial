#include <iostream>
#include <fstream>
#include <time.h>
#include <ctime>
#include <unistd.h>
#include <signal.h>
#include "sidekick.h"


/// @brief - exit the program
///
///
void ctrl_c_handler(int s)
{
	int ret;
	printf("Caught signal %d\n", s);
	exit(1);
}



int main()
{
    // for debugging
    signal(SIGINT, ctrl_c_handler);
    char side[80] = "right";

    

    // files for logs and pointcloud
    std::ofstream pointcloudfile;
    std::string filename = "/usr/src/ccontainer/pointcloud_data/pointcloud_" + std::string(side) + ".txt";
    pointcloudfile.open(filename, std::ios_base::app);
    pointcloudfile.setf(std::ios::fixed, std::ios::floatfield);
    pointcloudfile << "asasdasd" << std::endl;
    std::cout << "done: " << filename << std::endl;
    pointcloudfile.close();

    sidekick();
    sleep(60);
}