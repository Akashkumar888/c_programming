#include<stdio.h>
void fun(int n){
    if(n==0){ 
        return ;           // base case
}
    printf("%d\n",n);
    fun(n-1);            // call
    
return ;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}