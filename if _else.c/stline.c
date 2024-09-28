#include<stdio.h>
int main(){
    int x1,y1,x2,y2,z1,z2;
    printf("Enter the number x1 :");
    scanf("%d",&x1);
    printf("Enter the number y1 :");
    scanf("%d",&y1);
    printf("Enter the number z1 :");
    scanf("%d",&z1);
     printf("Enter the number x2 :");
    scanf("%d",&x2);
     printf("Enter the number y2 :");
    scanf("%d",&y2);
     printf("Enter the number z2 :");
    scanf("%d",&z2);
    int  m1=(y2-y1)/(x2-x1);
    int m2=(z2-z1)/(y2-y1);
    if(m1==m2){
        printf("Points on the st line");
    }
    else{
        printf("Points not on the st line");
    }
    return 0;
}