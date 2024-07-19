#include <iostream>
#include <string>
#include <string_view>

// Once the prefix or suffix is removed, it cannot be changed
// back until the string_view is reassigned again. This feature
// of string_view is also helpful to handle substrings. But those
// substrings does not necessarilly terminate with null character.
// But string_view still takes cares of the length function of the substring.
int main() {
    std::string_view sv { "Peach" };

    // Will convert sv to "each"
    sv.remove_prefix(1);
    std::cout << sv << '\n';

    // Will convert sv to "ea"
    sv.remove_suffix(2);
    std::cout << sv << '\n';
}