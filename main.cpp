#include <iostream>
#include <string>
#include <string_view>

// This is unsafe return since t and f, the objects which the
// returned string_view views, is destroyed as soon as this function is over.
// Hence, creating a dangling string_view
std::string_view getBoolName1(bool b) {
    std::string t { "true" };
    std::string f { "false" };

    return b ? t : f;
}

// This is safe because the C-style strings "true" and "false"
// remains throughout the lifetime of the program
std::string_view getBoolName2(bool b) {
    return b ? "true" : "false";
}

// This is also safe if the arguments passed to this function exists even after
// the function ends (since we are returning the views of the arguments only)
// If an argument is a temporary that is destroyed at the end of the full expression
// containing the function call, the returned std::string_view must be used immediately,
// as it will be left dangling after the temporary is destroyed.
std::string_view checkAlphabetical(std::string_view s1, std::string_view s2) {
    return s1 < s2 ? s1 : s2;
}

int main() {
    std::cout << getBoolName1(true) << " " << getBoolName1(false) << '\n';
    std::cout << getBoolName2(true) << " " << getBoolName2(false) << '\n';
    std::cout << checkAlphabetical("Hello", "World") << '\n';
}