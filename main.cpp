#include <iostream>

#define PRINT_JOE

int main() {
    #ifdef PRINT_JOE
        std::cout << "This statement will get compiled, because PRINT_JOE macro is defined\n";
    #endif

    // This is equivalent to the above statement
    #if defined(PRINT_JOE)
        std::cout << "This statement will get compiled, because PRINT_JOE macro is defined\n";
    #endif

    #ifdef PRINT_BOB
        std::cout << "This statement will not get compiled, because PRINT_BOB macro is not defined\n";
    #endif

    #ifndef PRINT_BOB
        std::cout << "This statement will get compiled, because PRINT_BOB macro is not defined\n";
    #endif

    // This is equivalent to the above statement
    #if !defined(PRINT_BOB)
        std::cout << "This statement will get compiled, because PRINT_BOB macro is not defined\n";
    #endif

    #if 0
        std::cout << "This statement will not get compiled, because #if 0 is the condition\n";
    #endif

    #if 1
        std::cout << "This statement will get compiled, because #if 1 is the condition\n";
    #endif

    #if 2
        std::cout << "This statement will also get compiled, because #if 2 is the condition\n";
    #endif
}