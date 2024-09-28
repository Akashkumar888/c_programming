#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    for(int i=0;i<8;i++){
        if(arr[i]>4){
            count++;
        }
    }
    printf("count = %d ",count);
    return 0;
}