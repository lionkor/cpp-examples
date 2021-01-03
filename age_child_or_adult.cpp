#include <iostream>

int main() {
    std::cout << "Enter your age: ";
    unsigned int age = 0;
    std::cin >> age;
    if (age < 18) {
        std::cout << "You're a child!" << std::endl;
    } else {
        std::cout << "You're an adult!" << std::endl;
    }
}
