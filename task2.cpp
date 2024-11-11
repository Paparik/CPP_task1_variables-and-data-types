#include <iostream>

int main()
{
    float pi = 3.14159265359;
    float S, L, R;
    std::cout << "Input L: ";
    std::cin >> L;

    R = L / (2 * pi);
    S = pi * R * R;

    std::cout << S;
}