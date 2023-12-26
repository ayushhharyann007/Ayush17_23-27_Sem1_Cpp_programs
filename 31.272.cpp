#include <iostream>

int main() {
    int number, reversedNumber = 0;

    // Input a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Reverse the number
    for (int originalNumber = number; originalNumber > 0; originalNumber /= 10) {
        int digit = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + digit;
    }

    // Output the reversed number
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    return 0;
}
