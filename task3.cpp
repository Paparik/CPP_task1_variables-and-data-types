#include <iostream>

int main() {
	float v, t, a;
	std::cout << "Input v, t, a: ";
	std::cin >> v >> t >> a;

	float s = v * t + (a * t * 2) / 2;

	std::cout << s;
}