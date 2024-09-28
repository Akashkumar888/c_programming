#include<stdio.h>
void fun(int n){
    if(n==0){ 
        return ;                   // base case
}
else{
    fun(n-1);                    // call
    printf("%d\n",n);           // code
    return ;
}
return ;
    }
    
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}