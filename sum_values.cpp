#include <iostream>

int main() {
    int numbers[10];
    for (int i = 0; i < 10; ++i) {
        // i + 1 so that it's 1-10 instead of 0-9
        std::cout << "Enter number (" << i + 1 << "/10): ";
        std::cin >> numbers[i];
    }
    // now sum them up
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += numbers[i];
    }
    std::cout << "The sum is " << sum << std::endl;
}
