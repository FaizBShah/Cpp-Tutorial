#include <iostream>

int main() {
    // We can use the ' character as a digit separator
    int bin { 0b1011'0010 };       // assign binary 1011 0010 to the variable
    long value { 2'132'673'462 };  // much easier to read than 2132673462

    // int bin { 0b'1011'0010 };  // Cannot use the ' character at the start of the no., else it will throw error

    std::cout << bin << " " << value << '\n';
}