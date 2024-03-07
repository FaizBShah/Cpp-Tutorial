#include <iostream>

int getVal() {
    return 5;
}

int main() {
    // constexpr keyword is a keyword which defines that a variable is a constant + is initialized by a value which
    // is known at compile time (i.e. a constant expression).
    // All constexpr variables are implicitly const, but not all const variables are implicitly constexpr.
    // Function parameters can be const, but cannot be constexpr because the parameter's values are decided
    // during run-time, not compile-time.
    // There are special functions which do support constexpr parameters, called consteval functions.
    constexpr double g { 9.8 };  // This will compile
    // constexpr int val { getVal() }; // This will not compile
}