#include <iostream>
#include <type_traits>

constexpr int doSomething() {
    // std::is_constant_evaluated() returns true only if this function
    // is guaranteed to be evaluated during compile-time
    return std::is_constant_evaluated() ? 0 : 1;
}

int main() {
    constexpr int num1 { doSomething() };  // Will assign 0;
    int num2 { doSomething() };            // Will assign 1;
    std::cout << num1 << ' ' << num2 << '\n';
}