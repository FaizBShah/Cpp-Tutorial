#include <iostream>
#include <cstdlib>

void doPrint() {
    std::cout << "In doPrint()\n";
}

int main() {
    std::cout << "Starting main()\n";
    doPrint();
    std::cout << "Ending main()\n";
    return EXIT_SUCCESS;
}