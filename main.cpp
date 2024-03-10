#include <iostream>

// A constexpr function is a function whose return value
// may be computed at compile-time. If the parameters supplied
// to this function are constexpr values, then the return value of
// this might be computed during compile-time only. A constexpr value
// can also be evaluated during run-time if the parameters are not
// known during compile-time (i.e. they are not constant expressions)
// Note: According to the C++ standard, a constexpr function that is eligible
// for compile-time evaluation must be evaluated at compile-time if the return
// value is used where a constant expression is required. Otherwise, the compiler
// is free to evaluate the function at either compile-time or runtime. If the
// function is being evaluated during compile-time, any other function it calls
// internally must also return value during compile-time only
constexpr int greater(int x, int y) {
    return x > y ? x : y;
}

int main() {
    constexpr int x { 5 };
    constexpr int y { 6 };

    int x1 { 5 };
    int y1 { 6 };

    std::cout << greater(x, y) << '\n';    // This function call will be evaluated during compile-time
    std::cout << greater(x1, y1) << '\n';  // This function call will be evaluated during run-time

    constexpr int g { greater(5, 6) };  // case 1: always evaluated at compile-time
    std::cout << g << " is greater!\n";

    std::cout << greater(5, 6) << " is greater!\n";  // case 2: may be evaluated at either runtime or compile-time

    int x2 { 5 };                                     // not constexpr but value is known at compile-time
    std::cout << greater(x2, 6) << " is greater!\n";  // case 3: likely evaluated at runtime

    int x3 {};
    std::cin >> x3;
    std::cout << greater(x3, 6) << " is greater!\n";  // case 4: always evaluated at runtime
}