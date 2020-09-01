#include <iostream>

int age;

int main() {
	std::cout << "Enter your age:";
	std::cin >> age;

	if (age > 20) {
		std::cout << "you are an aduld";
	}

	if (age == 20) {
		std::cout << "you are an aduld";
	}
	if (age < 20) {
		std::cout << "you are a teenager";
	}
}