#include "square.h"
#include "wave.h"
#include <iostream>

int main() {
    std::cerr << "Debugging\n"; // Use for printing debugging statements. cerr is unbuffered, unlike cout, and hence better
    std::cout << getSquareSides() << '\n';
}