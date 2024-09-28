#include<stdio.h>
void increase(int a){
    if(a==0){ 
    return ;
    }
    else{
    printf("%d\n",a);
    increase (a-1);
    printf("%d\n",a);
    }
    return ;
}
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
 increase(n);
    return 0;
}