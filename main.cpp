#include <iostream>
#include <string>
#include <string_view>

void print(std::string_view s) {
    std::cout << s << '\n';
}

// Its expensive to initialize and copy a string, therefore string_view
// was introduced in C++17. string_view is a read-only copy of an existing
// string, and is much performant and faster in initializing and copying.
int main() {
    std::string_view s { "Hello World" };
    print(s);

    std::string s1 { "Hello World 2" };  // std::string implicitly gets converted to std::string_view
    print(s1);
}