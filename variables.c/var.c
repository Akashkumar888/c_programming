#include <stdio.h>

int main() {
    printf("%d\n", (0 || "Akash")); // Output: 1
    printf("%d\n", (0 && "a"));     // Output: 0 
    printf("%d\n", (1 && "Kumar")); // Output: 1
    return 0;
}
