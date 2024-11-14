#include <stdio.h>
#include <stdlib.h>  // For malloc, calloc, realloc, and free

int main() {
    int i;
    
    // 1. Using malloc() to allocate memory for 5 integers
    int *arr1 = (int*)malloc(5 * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1 using malloc.\n");
        return 1;
    }

    // Assigning values to arr1 and printing
    for (i = 0; i < 5; i++) {
        arr1[i] = i + 1;
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    printf("\n");

    // 2. Using calloc() to allocate memory for 5 integers
    int *arr2 = (int*)calloc(5, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2 using calloc.\n");
        free(arr1);  // Freeing the previously allocated memory before exiting
        return 1;
    }

    // Printing values of arr2 (should be all zeros)
    for (i = 0; i < 5; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);  // All elements will be initialized to 0
    }

    printf("\n");

    // 3. Using realloc() to resize the memory block arr1 from 5 to 10 integers
    arr1 = (int*)realloc(arr1, 10 * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory reallocation failed for arr1 using realloc.\n");
        free(arr2);  // Freeing arr2 as well before exiting
        return 1;
    }

    // Assigning values to the newly allocated part of arr1 and printing the entire array
    for (i = 5; i < 10; i++) {
        arr1[i] = i + 1;
    }

    for (i = 0; i < 10; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    // 4. Freeing dynamically allocated memory
    free(arr1);
    free(arr2);

    return 0;
}
