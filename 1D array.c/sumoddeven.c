#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<8;i++){
        if(i%2==0){
           sumeven+=arr[i];
        }
        else{
           sumodd+=arr[i];
        }
    }
    printf("%d\n",sumeven-sumodd);
    printf("%d",sumodd-sumeven);
    return 0;
}