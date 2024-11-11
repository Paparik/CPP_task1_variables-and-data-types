#include <iostream>

int main() {
    double deposit;
    double interestRate;

    std::cout << "Input deposit and interest rate: ";
    std::cin >> deposit >> interestRate;

    double monthlyPayment = deposit * (interestRate / 12) / 100;
    std::cout << "Sum everyu month: " << monthlyPayment << " euro";
}