#include<stdio.h>
void greeting(int n){
    if(n==0){
        return ;
    }
     /*if(n==1){
        printf("Good morning");
        return ;
    } */
    else{
        printf("Good morning\n");
        greeting(n-1);
    return ;
}
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    greeting(n);
    return 0;
}