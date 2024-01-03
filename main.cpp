#include <iostream>

int main() {
    int a;
    int b = 1;
    int c(2);
    int d { 4 }; // C++ 11 way of doing. Preferred.
    int e = { 5 };
    int f{};

    std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;

    return 0;
}