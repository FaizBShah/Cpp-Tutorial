#include <iostream>

// Note: x and y are not constexpr variable, neither they can be declared as such.
// This is because that will imply that constexpr functions can only be called with
// constexpr parameters, which is wrong, because we cal also call with non-constexpr
// parameters.
// We can also modify the values of these variables inside the function, and also introduce
// local non-const variable like int z { x + y}, and modify the value of z too. All these
// changes will be evaluated at compile-time if the function is evaluated in compile-time.
constexpr int greater(int x, int y) {
    return x > y ? x : y;
}

int main() {
}