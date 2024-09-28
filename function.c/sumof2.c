#include<stdio.h>
int add(int x,int y){
    return x+y; // return ek value lekar function  ko end kar
}
int sub(int x,int y){
    return x-y;
}
int pro(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}
int main(){
    int a,b;
printf("Enter the number a and b:\n");
scanf("%d%d",&a,&b);
int sum=add(a,b);
int subtraction=sub(a,b);
int multiply=pro(a,b);
int division=div(a,b);
printf("sum=%d\n",sum);
printf("sub=%d\n",subtraction);
printf("pro=%d\n",multiply);
printf("div=%d\n",division);
return 0; // integer return mtlb integer or 0 return//
}