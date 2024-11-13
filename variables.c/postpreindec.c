
#include<stdio.h>

int main() {
    int x = 5;
// Post-increment (x++): The value of x is printed first (before incrementing), then x is incremented.
// Pre-increment (++x): The value of x is incremented first, then the new value is printed.
// The same logic applies to post-decrement (x--) and pre-decrement (--x).


// Post-increment/decrement is often used when the current value is needed in an expression before modifying it.
// Pre-increment/decrement is used when the value needs to be modified before it's used in an expression.




    // Post-increment
    printf("x = %d\n", x); // Prints 5
    printf("Post-increment: %d\n", x++); // Prints 5, then x becomes 6
    printf("After Post-increment: %d\n", x); // Prints 6

    // Pre-increment
    printf("Pre-increment: %d\n", ++x); // x becomes 7, prints 7
    printf("After Pre-increment: %d\n", x); // Prints 7

    // Post-decrement
    printf("Post-decrement: %d\n", x--); // Prints 7, then x becomes 6
    printf("After Post-decrement: %d\n", x); // Prints 6

    // Pre-decrement
    printf("Pre-decrement: %d\n", --x); // x becomes 5, prints 5
    printf("After Pre-decrement: %d\n", x); // Prints 5

    return 0;
}
