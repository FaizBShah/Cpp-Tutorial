#include <iostream>

int main() {
    bool b1 { true };
    bool b2 { false };

    std::cout << b1 << ' ' << b2 << '\n';  // Will print 1 and 0
    std::cout << std::boolalpha;           // To print true and false instead of 0 and 1, use std::boolalpha (You can use std::noboolalpha to turn it off)
    std::cout << b1 << ' ' << b2 << '\n';  // Will print true and false
}