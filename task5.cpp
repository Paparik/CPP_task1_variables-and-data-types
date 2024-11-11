#include<iostream>

int main()
{
    double money, b;
    int a;
    std::cout << "Input sum: ";
    std::cin >> money;
    a = money;
    b = (money - a) * 100;
    std::cout << a << "$ and " << b << "  cents";
    return 0;
}