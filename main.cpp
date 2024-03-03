#include <iostream>

int main() {
    const int x { 3 + 4 };  // constant expression 3 + 4 must be evaluated at compile-time by the compiler
    int y { 3 + 4 };        // constant expression 3 + 4 may be evaluated at compile-time or runtime by the compiler
}