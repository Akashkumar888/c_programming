#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter the  matrix:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
            
        }
    }
    printf(" sum = %d",sum);

    return 0;
}