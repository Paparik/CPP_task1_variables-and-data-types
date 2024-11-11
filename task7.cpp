#include <iostream>

int main()
{
    double s, t;
    std::cout << "Input distance and time: ";
    std::cin >> s >> t;

    double v = s / t;

    std::cout << "Speed: " << v << " m/s";
}