#include <iostream>
#include <string>

int main() {
    std::string animal { "Elephant" };
    std::cout << "The length of the string is: " << animal.length() << '\n';  // Will print 8;

    int length { static_cast<int>(animal.length()) };  // .length() returns size_t, not int, so you need to cast it to int

    std::cout << "The length of the string is: " << length << '\n';  // Will print 8;
}