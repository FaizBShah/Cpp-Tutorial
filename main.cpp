#include <iostream>

int main() {
    int x { 15 };

    // Once you change the output format, it remains that way until changed again explicitly
    std::cout << std::hex << x << '\n';  // To output a value in hexadecimal
    std::cout << std::oct << x << '\n';  // To output a value in octal
    std::cout << std::dec << x << '\n';  // To output value in decimal
}