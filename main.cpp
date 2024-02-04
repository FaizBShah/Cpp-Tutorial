#include <iostream>

void print(int x) {
    std::cout << x << '\n';
}

int main() {
    print(static_cast<int>(5.5));  // We can do explicit type conversion using static_cast
}