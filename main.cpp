#include <bitset>  // To output values in binary pre-C++20, you need to import the bitset header
#include <format>
#include <iostream>
// #include <print> //  To output values in C++ 23, you need to import the print header

int main() {
    std::bitset<8> bin1 { 14 };  // Creating a bitset variable with size 8 bits. It can be initialized with any decimal, hex, octal or binary value
    std::cout << bin1 << '\n';
    std::cout << std::bitset<4> { 9 } << '\n';

    // From C++ 20, you can also use the format function to print binary values
    std::cout << std::format("{:b}\n", 0b1010);   // Will print 1010
    std::cout << std::format("{:#b}\n", 0b1010);  // Will print 0b1010

    // From C++ 23, you can also use the print function to print binary values
    // std::println("{:b} {:#b}", 0b1010, 0b1010);  // Will print 1010 0b1010
}