#include <iostream>
#include <string>

int main() {
    std::cout << "Enter your name: ";
    std::string name;
    // "getline" instead of "cin >> name", since cin only reads until a space, so a
    // name containing spaces would not be read entirely.
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << std::endl;
}
