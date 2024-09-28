#include<stdio.h>
int main(){
    
    int n,rem,count=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while (n>0)
    {
        // rem=n%10;
        n=n/10;
        count++;
    }
    printf("count=%d\n",count);
    return 0;
}