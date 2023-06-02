#include <iostream>

int main (int argc, char ** argv){
    int seconds;
    int hours, minutes, sec;
    std::cout << "enter the seconds:" << std::endl;
    std::cin >> seconds;
    hours = seconds / 3600;
    sec = seconds % 60;
    minutes = ( seconds / 60) % 60;
    std::cout << seconds << " seconds is " << hours <<  " hours " << minutes << " minutes " << sec << " seconds";
    return 0;
}
