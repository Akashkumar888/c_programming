#include<stdio.h>
int main(){
    int arr[5]={23,45,67,89,15};
     for(int i=0;i<5;i++){
        printf("%p\n",&arr[i]);
    }
    for(int i=0;i<5;i++){
        int *p=&arr[i];
        printf("%d\n",*p);
    }
    return 0;
}