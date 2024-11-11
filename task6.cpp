#include<iostream>

int main()
{
    int days, weeks = 0; 
    
    std::cout << "Input days: ";
    std::cin >> days;

    while (days >= 7)
    {
        weeks++;
        days -= 7;
    }
    std::cout << weeks << " weeks " << days << " days";
}