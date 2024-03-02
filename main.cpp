#include <iostream>

int main() {
    int num { 012 };  // This is the Octal no. 12 which is equivalent to 10 in decimal. To declare an octal no., prefix no. with 0
    std::cout << num << '\n';

    int hex1 { 0xF };  // This is the Hexadecimal no. F which is equivalent to 15 in decimal. To declare an octal no., prefix no. with 0x(preferred) or 0X
    std::cout << hex1 << '\n';

    // There was no support for binary in C++ before C++ 14. so binary used to be represented using hexadecimal values
    int bin_addr { 0x00FF };  // Every digit in hexadecimal occupies 4 bits, so this value represent the binary value 0000 0000 1111 1111

    // From C++ 14, support for binary was added. Use prefix 0b to declare a binary value
    int bin_value { 0b1010 };  // 10 in decimal

    std::cout << bin_addr << " " << bin_value << '\n';
}