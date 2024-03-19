#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to concatenate two strings
std::string add(std::string a, std::string b) {
    return a + b;
}

int main() {
    std::cout << "Addition of integers: " << add(5, 10) << std::endl;
    std::cout << "Addition of doubles: " << add(3.5, 2.7) << std::endl;
    std::cout << "Concatenation of strings: " << add("Hello, ", "world!") << std::endl;

    return 0;
}

