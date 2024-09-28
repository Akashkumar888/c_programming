#include<stdio.h>
void fun( int abc[]){
    abc[0]=188;
    return ;
}
int main(){
    int arr[5]={12,23,34,45,56};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}