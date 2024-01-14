// Angle brackets are for headers not written by us, and are in the includes directory
// To know why this header does not contain .h extension, follow this link:- 
// https://www.learncpp.com/cpp-tutorial/header-files/#:~:text=on%20your%20system.-,Why%20doesn%E2%80%99t%20iostream%20have%20a%20.h%20extension%3F,-Another%20commonly%20asked
#include <iostream>
// Double-quotes are for headers written by us. Preprocessor will first try to search this file
// in the current directory, else in the includes directory
#include "add.h"

// Do not try to include .cpp files, as its a bad practice
// Doing so might result in name conflicts, and other issues

int main() {
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
}