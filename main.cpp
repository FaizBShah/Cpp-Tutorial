#include <iostream>
#include <string>

int main() {
    std::string name {};
    std::string color {};

    // To input string properly, use std::getline() instead of std::cin
    // The std::ws is an input manipulator which ignores leading whitespaces in input
    std::getline(std::cin >> std::ws, name);
    std::getline(std::cin >> std::ws, color);

    std::cout << "The name is: " << name << " and color is: " << color << '\n';  // Will print Faiz Shah and Red properly
}