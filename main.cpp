#include <iostream>

int main() {
    [[maybe_unused]] int a = 2; //[[maybe_unused]] attribute allows us to unused variables when -Werror flag is set
    return 0;
}