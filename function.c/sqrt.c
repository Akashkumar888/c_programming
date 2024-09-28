#include<stdio.h>
#include<math.h>
//#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);
   float root=sqrt(n);
   printf("%f\n",root);
   int a,b;
   printf("Enter the number a and b:");
   scanf("%d%d",&a,&b);
   float sqr=pow(a,b);
   printf("%f",sqr);
    return 0;
}