#include <iostream>

// Since one of the main disadvantages of consteval functions
// is that it cannot be used during run-time evaluations, thus
// we can use the best of both consteval and constexpr by creating
// this below consteval helper function. Whenever we want to evaluate
// a constexpr function during compile-time, we can wrap it inside this
// helper function. And whenever we the constexpr function during compile-time,
// we can just call it directly.
consteval auto compileTime(auto value) {
    return value;
}

constexpr int greater(int x, int y) {
    return x > y ? x : y;
}

// Note: Because constexpr functions may be evaluated at compile-time, the compiler must be able to see the full definition
// of the constexpr function at all points where the function is called. A forward declaration will not suffice, even if the
// actual function definition appears later in the same compilation unit.
// This means that a constexpr function called in multiple files needs to have its definition included into each such file --
// which would normally be a violation of the one-definition rule. To avoid such problems, constexpr functions are implicitly inline,
// which makes them exempt from the one-definition rule.
// As a result, constexpr functions are often defined in header files, so they can be #included into any .cpp file that requires the
// full definition.
// Consteval functions are also implicitly inline (presumably for consistency).
int main() {
    std::cout << greater(5, 6) << '\n';               // This function might or might not be evaluated during compile-time
    std::cout << compileTime(greater(5, 6)) << '\n';  // This function will always be evaluated during compile-time, as its wrapped by a consteval function

    int x { 5 };

    std::cout << greater(x, 6) << '\n';  // We can still use the function for during run-time evaluations
}