#ifndef PI_H
#define PI_H

// Inline is a keyword in C++ which in modern usage means more than one definition
// of a function is allowed. Although it comes with the condition that both definitions
// should be similar. Its mostly used in functions of header-only C++ libraries, where
// function's body is defined in the header files only. The reason its used in those functions
// is because a header file can be imported in more than 1 file, thus copying the function body
// in all those files. During linkage time, the compiler will see that there are multiples definitions
// and thus will throw an error. Thus, to prevent this, the inline keyword is used.
// Historically in older C++, the keyword was put in front of a function to hint the compiler that
// this function could be inline expanded during compilation time.
inline double pi() {
    return 3.14159;
}

#endif