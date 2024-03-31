#include <iostream>
#include <string>

int main() {
    std::string name {};
    std::string color {};

    // If you enter Faiz Shah and Red, then name will contain Faiz, and color will contain Shah
    // Thus, cin does not work with std::string, as it only inputs word till the space character
    // is occured.
    std::cin >> name;
    std::cin >> color;

    std::cout << "The name is: " << name << " and color is: " << color << '\n';  // Will print Faiz and Shah, instead of Faiz Shah and Red
}