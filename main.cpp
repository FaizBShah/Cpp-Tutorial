#include <iostream>

int main() {
    // Put single literal characters in single-quotes instead of double-quotes (which is basically a string),
    // as that helps compiler optimize more easily
    char c1 { 'a' };  // To initialize a char variable
    char c2 { 97 };   // This is also valid, but not recommended

    std::cout << c1 << c2 << '\n';  // This will print aa

    char ch {};

    std::cin >> ch;  // To input a char

    std::cout << ch << '\n';

    std::cout << '\x6F' << '\x4E' << '\n';  // To convert hexadecimal no.s into chars

    // Fun fact: A character can support more than one literal in single-quotes (e.g. '56') in some compilers,
    // but since it is a compiler-specific implementation, its best to avoid it

    // wchar_t is deprecated and should be avoided unless interfacing with Windows API. Its size implementation
    // defined and not reliable.
    // char8_t, char16_t and char32_t have minimum 8, 16 and 32 bits. char16_t and char32_t are usually used
    // to support Unicode characters.
}