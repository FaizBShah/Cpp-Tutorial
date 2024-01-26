#include <cstddef>  // This library is one of many which has size_t defined
#include <iostream>

// size_t is the type returned by sizeof() operator, and is usually used
// to represent size of objects.
int main() {
    std::cout << sizeof(size_t) << '\n';
}