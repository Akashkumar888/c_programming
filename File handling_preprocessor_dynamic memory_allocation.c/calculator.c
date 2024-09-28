#include<stdio.h>
int main()
{
    int a,b;
    int ch;
       printf("Enter the a :");
       scanf("%d",&a);
       printf("Enter ch: ");
       scanf("%d",&ch);
       printf("Enter the b :");
       scanf("%d",&b);
    switch(ch){
        case 1:
        printf("sum=%d\n",a+b);
        break;
        case 2:
        printf("subtract=%d\n",a-b);
        break;
        case 3:
        printf("multiply=%d\n",a*b);
        break;
        case 4:
        printf("divide=%f\n",(float)a/b);
        break;
        default:
        printf("Invalid choice");
        break;
    }
    return 0;
}