#include <iostream>
#include <string>

int main() {
    std::string name1 { "Jason" };  // String with value
    name1 = "Faiz";                 // The variable can be re-assigned, and that too to a string of different length

    std::string name2 {};  // Empty string

    std::cout << "My name is: " << name1 << '\n';  // You can use string variables directly in std::cout
    std::cout << '[' << name2 << ']' << '\n';      // This will print []
}