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

int main() {
    std::cout << greater(5, 6) << '\n';               // This function might or might not be evaluated during compile-time
    std::cout << compileTime(greater(5, 6)) << '\n';  // This function will always be evaluated during compile-time, as its wrapped by a consteval function

    int x { 5 };

    std::cout << greater(x, 6) << '\n';  // We can still use the function for during run-time evaluations
}