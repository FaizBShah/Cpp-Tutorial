#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

int getUserInput() {
    PLOGD << "In function getUserInput()";

    std::cout << "Enter a number\n";

    int x {};
    std::cin >> x;

    return x;
}

int main() {
    plog::init(plog::debug, "LogFile.txt"); // Initializing the logger library

    PLOGD << "In function main()"; // PLOGD is used to log in debug level

    int x { getUserInput() };
    std::cout << "You entered: " << x << '\n';
}