#include <cstdint>
#include <iostream>

int main() {
    std::int8_t val { 65 };
    std::cout << val << '\n';                    // This might not print 65, but 'A', since int8_t acts as char in some compiler implementations
    std::cout << static_cast<int>(val) << '\n';  // To print it as 65, convert type to int
}