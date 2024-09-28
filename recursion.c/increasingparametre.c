#include<stdio.h>
void fun(int x,int n){   //  using extra parameter
    if(x>n){
        return ;
}
else{
    printf("%d\n",x);
    fun(x+1,n);
    return ;
}
return ;
    }
    
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fun(1,n);
    return 0;
}