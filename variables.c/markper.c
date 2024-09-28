#include<stdio.h>
int main(){
    float w;
    printf("Enter the marks 1st :");
    scanf("%f",&w);
    float x;
    printf("Enter the marks 2nd :");
    scanf("%f",&x);
    float y;
    printf("Enter the marks 3rd :");
    scanf("%f",&y);
    float z;
    printf("Enter the marks 4th :");
    scanf("%f",&z);
    float m;
    printf("Enter the whole number :");
    scanf("%f",&m);
    float k=(w+x+y+z)/4;
    printf("%f",k*(100)/m);
    return 0;
}