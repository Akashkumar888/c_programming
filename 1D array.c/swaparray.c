#include<stdio.h>
void fun( int abc[]){
    int temp=abc[0];
    abc[0]=abc[1];
    abc[1]=temp;
    return ;
}
int main(){
    int arr[5]={12,23};
    printf("%d  %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d  %d\n",arr[0],arr[1]);
    return 0;
}