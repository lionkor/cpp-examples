#include <iostream>
#include <string>

int main() {
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Enter your age: ";
    // unsigned enforces that it's >0
    unsigned int age = 0;
    std::cin >> age;
    std::cout << "Hello, " << name << ", you're " << age << " years old!" << std::endl;
}
