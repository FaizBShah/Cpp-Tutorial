#include <iostream>

// For constexpr functions, unless the value returned
// by the function is not being used in a constant expression
// environment (such as being assigned to a constexpr variable),
// then the function has no guarantee to be evaluated during compile-time.
// consteval keyword ensures that the function is always evaluated during
// compile-time if the parameters are constexpr, no matter what. And if
// for some reason compile-time evaluation is not possible (for example,
// the parameter being passed is not constexpr), then it'll throw an error
// The disadvantage of consteval functions are that unlike constexpr, consteval
// functions never evaluate during run-time.
consteval int greater(int x, int y) {
    return x > y ? x : y;
}

int main() {
    const int g { greater(5, 6) };  // Will be evaluated during compile-time
    std::cout << g << '\n';

    std::cout << greater(5, 6) << '\n';  // Will be evaluated during compile-time. (If greater() was constexpr, it might or might not get evaluated during compile-time)

    int x { 5 };
    // std::cout << greater(x, 6) << '\n'; This will throw compile-time error as x is not constexpr variable, hence this function cannot be evaluated during compile-time
}