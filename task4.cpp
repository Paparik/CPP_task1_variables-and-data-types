#include <iostream>

int main() {
    int seconds, hours, minutes;
    std::cout << "Input seconds: ";
    std::cin >> seconds;

    minutes = seconds / 60;
    hours = minutes / 60;

    std::cout << hours << " hours " << (minutes % 60) << " minutes " << (seconds % 60) << " seconds.";

    return 0;
}