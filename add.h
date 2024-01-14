// Header files are used to forward declare functions
// which will be imported and used by other files
// We can also define the function body in the header
// files, but we should avoid doing it, as it can create
// more than one definitions of the function by the preprocessor
// if this header file is included in more than 1 source file, and
// it will then give a linker error
int add(int x, int y);