#include<stdio.h>
int stair(int a){
    if(a==1 ||a==2 ){
        return a;
    }
    if(a==3){
        return a+1;
    }
        return stair(a-1)+stair(a-2)+stair(a-3);
}
int main(){
    int n;
printf("Enter the number:");
scanf("%d",&n);
int ways=stair(n);
printf("number of ways=%d\n",ways);
    return 0;
}