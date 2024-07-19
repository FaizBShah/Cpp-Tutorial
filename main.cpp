#include <iostream>
#include <string>
#include <string_view>

std::string getName() {
    std::string s { "Faiz" };
    return s;
}

// Incorrect usages of string_view
int main() {
    std::string_view sv {};  // Initialized a string_view object

    {
        std::string s { "Hello World" };
        sv = s;  // s will get destroyed after this line, as it doesn't exist outside of this block
    }

    // This will give undefined behaviour because the object which the string_view was viewing (s) is already destryed and doesn't exist
    std::cout << sv << '\n';

    // This will also give undefined behavior since the "s" object being returned from the function gets destroyed once the function is executed
    std::string_view namev { getName() };
    std::cout << namev << '\n';
}