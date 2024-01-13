#include <iostream>

// In forward declarations, parameter names are optional
// This forward declaration is important in multi-file codes
// so that this file (i.e. main.cpp) can compile. The add() declaration
// gets linked to the add.cpp implementation during the linking stage
// by the linker
int add(int, int);

int main() {
    std::cout << "The sum of 3 + 4 is " << add(3, 4) << '\n';
}