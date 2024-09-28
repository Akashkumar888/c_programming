#include<stdio.h>
/*void fun(int n){
    if(n==0){
        return ;
}
else{
    printf("%d\n",n);
    fun(n-1);
    return ;
}
return ;
    }
    */
int fun(int n){
    if(n==0){
        return 1;
    }
    else{
        printf("%d\n",n);
    return fun(n-1);
}
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}