#include<stdio.h>
int powerlog(int x,int y){
    if(y==0){
        return 1;
    }
    if(y==1){
        return x;
    }
    if(y%2==0){
    return powerlog(x,(y/2)) * powerlog(x,(y/2));
}
else{
    return powerlog(x,(y/2)) * powerlog(x,(y/2)+1);
}
}
int main(){
    int a,b;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    int p=powerlog( a, b);
    printf("%d raised to the power %d is : %d\n",a,b,p);
    return 0;
}