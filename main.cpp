#include <iostream>
#include <fstream>
#include <time.h>
#include <ctime>
#include <unistd.h>

int main()
{
    // files for logs and pointcloud
    std::ofstream pointcloudfile;
    std::string filename = "/usr/src/ccontainer/pointcloud_data/pointcloud_right.txt";
    pointcloudfile.open(filename, std::ios_base::app);
    pointcloudfile.setf(std::ios::fixed, std::ios::floatfield);
    pointcloudfile << "asasdasd" << std::endl;
    std::cout << "done" << std::endl;
    pointcloudfile.close();
    sleep(60);
}