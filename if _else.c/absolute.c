#include <stdio.h>
int main()
{
    int n;
    printf("Enter the year :");
    scanf("%d", &n);
    if (n < 0)
    {
        n = n * (-1);
    }
    printf("Absolute value=%d", n);
    return 0;
}