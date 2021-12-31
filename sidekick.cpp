#include <iostream>
#include <unistd.h>

int sidekick(void)
{
    std::cout << "starting sidekick" << std::endl;
    sleep(20);
    std::cout << "leaving sidekick" << std::endl;
    return 1;
}