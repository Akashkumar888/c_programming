#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    float x;
    x=cbrt(8);
    printf("%f\n",x);
  //  int y= __INT_MAX__; // c  language
  int y=INT_MAX;
  int z=INT_MIN;
    printf("%d\n",y);
    printf("%d\n",z);
    return 0;
}