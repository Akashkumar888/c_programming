#include<stdio.h>
int main(){
    int arr[5]={23,45,67,89,15};
    printf("%p\n",&arr[0]);
    int *p=&arr[4];
printf("%d\n",*p);
int size=sizeof(arr[0]);
printf("%d\n",size);
    return 0;
}