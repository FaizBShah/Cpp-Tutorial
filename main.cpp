#include <iostream>

// By declaring the "num" argument as const, we are preventing
// any modification of this variable inside the function.
// Although, using const for pass-by-value variables is not recommended
// as they are anyways copies and will be destroyed once the function ends.
// const is usually for arguments which are passed-by-reference or passed-by-address.
void printNumber(const int num) {
    std::cout << num << '\n';
}

// Functions can also return const values, but for fundamental types,
// its usually ignored, while for other types, it usually gets destroyed
// once the function ends, so its not recommended.
const int getNumber() {
    return 5;
}

int main() {
    // In C++, there is no special convention for constant variables. It also follows normal camelCase convention

    const double PI { 3.14 };      // Recommended way of using const
    double const gravity { 9.8 };  // This is "east const" style, and this is also valid, but not recommended

    std::cout << PI << " " << gravity << '\n';

    printNumber(5);
    printNumber(getNumber());
}