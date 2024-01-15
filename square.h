// These are known as header guards. Its good practice for header file to have these
// The constant name (in this case, SQUARE_H), should try to be unique. This is done
// so that while importing headers, some issues not arises due to which a header file
// gets compiled more than 1 time.
#ifndef SQUARE_H
#define SQUARE_H

int getSquareSides() {
    return 4;
}

#endif