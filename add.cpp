// Its a good practice to include the header file in its
// corresponding source file, as it helps to catch certain
// errors, like wroong function type mismatch during compile
// time, instead of linking time
#include "add.h"

int add(int a, int b) {
    return a + b;
}