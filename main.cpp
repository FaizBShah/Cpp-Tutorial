#include <iomanip>
#include <iostream>

int main() {
    std::cout << 5.0 << '\n';         // Will print 5
    std::cout << 6.7f << '\n';        // Will print 6.7
    std::cout << 9876543.21 << '\n';  // Will print 9.87654e+06

    // Default output width of cout is upto 6 digits
    std::cout << 9.87654321f << '\n';       // Will print 9.87654
    std::cout << 987.654321f << '\n';       // Will print 987.654
    std::cout << 987654.321f << '\n';       // Will print 987654
    std::cout << 9876543.21f << '\n';       // Will print 9.87654e+06
    std::cout << 0.0000987654321f << '\n';  // Will print 9.87654e-05

    // We can change the behaviour by changing the width of cout
    // Output manipulators are sticky, i.e. once you set them, it
    // remains set
    std::cout << std::setprecision(17);                              // show 17 digits of precision
    std::cout << 3.33333333333333333333333333333333333333f << '\n';  // Will print 3.3333332538604736 (since its a float)
    std::cout << 3.33333333333333333333333333333333333333 << '\n';   // Will print 3.3333333333333335 (since its a double)
}