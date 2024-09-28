#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter the  matrix:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         if(arr[i][j]>max){
            max=arr[i][j];
         }
        }
    }
    printf("max = %d",max);
    return 0;
}