#include <iostream>

// Doing forward declaration so that function can be used even if defined out of order
void doPrint();

int main() {
    std::cout << "Starting main()\n";
    doPrint();
    std::cout << "Ending main()\n";
}

void doPrint() {
    std::cout << "In doPrint()\n";
}