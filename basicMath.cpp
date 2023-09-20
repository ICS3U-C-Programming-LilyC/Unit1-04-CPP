// Copyright (c) 2023 Lily Carroll all rights reserved

// Created by: Lily Carroll.
// Created on: September. 19, 2023
// This program does basic math.
#include <cmath>
#include <iostream>

int main() {
    std::cout << "3 + 5 = " << 3 + 5 << std::endl;
    std::cout << "17 - 4 = " << 17 - 4 << std::endl;
    std::cout << "15 / 2.0 = " << 15 / 2.0 << std::endl; // Use 2.0 to ensure decimal result
    std::cout << "9 - 2 / 2 = " << 9 - 2 / 2 << std::endl;
    std::cout << "7^9 = " << static_cast<long long>(pow(7, 9)) << std::endl;  // This allows for the result to be displayed as a long integer when using std::cout to output it.
    std::cout << "4 / 6.0 = " << 4 / 6.0 << std::endl; // Use 6.0 to ensure decimal result
}
