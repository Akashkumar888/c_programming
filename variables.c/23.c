#include <stdio.h>
#include <unistd.h>

int main() {
    int a;
    int num_processes = 4; // You can change this number to the desired number of processes

    for (a = 1; a < num_processes; a++) {
        fork();
    }

    printf("1\n");
    return 0;
}
