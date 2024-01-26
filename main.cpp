#include <iostream>
#include <cstdint> // This library is used to import the fixed-width typings. Its also used to import fast and least types.

// Fast types with size T are types which are the fastest in getting computed by the processor
// and minimum size T.
// Least types with size T are types that are the smallest size with minimum size atleast T
// Using fast and least types is not used that much as since the size changes with different
// architectures, the result might be inconsistent and unexpected

// Note:- Most compilers treat std::int8_t and std::unit8_t and their corresponding fast and
// least types as chars due to an oversight in the C++ specifications, and thus they should be avoided
int main() {
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
}