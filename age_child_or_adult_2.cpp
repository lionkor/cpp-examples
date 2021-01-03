#include <iostream>

int main() {
    std::cout << "Enter your age: ";
    unsigned int age = 0;
    std::cin >> age;
    std::string descriptor = "an adult";
    if (age < 18) {
        descriptor = "a child";
    }
    std::cout << "You're " << descriptor << "!" << std::endl;
}
