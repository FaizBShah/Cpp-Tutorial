#include <iostream>
#include <cstdint> // This library is used to import the fixed-width typings.

// C++ does not have max-width limit for its standard types. The max-width
// is left for the compiler to implement and depends upon the architecture. 
// An int type might be 4 bytes in one architecture, and 2 bytes in another.
// There might be times when we want out values to fixed-width regardless of
// the architecture, so these are the fixed-width types.
int main() {
    std::int32_t num { 10000 };
    std::int64_t long_num { 10000000 };
    std::cout << num << " " << long_num << '\n';
}