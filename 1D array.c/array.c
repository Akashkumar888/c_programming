#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
printf("Enter the element number :%d\n",i);
scanf("%d",&arr[i]);
    }
    printf("\n%d",arr[3]);
    return 0;
}