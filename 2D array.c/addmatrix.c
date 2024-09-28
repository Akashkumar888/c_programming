#include<stdio.h>
int main(){
    int arr[3][3];
    int brr[3][3];
    int crr[3][3];
    printf("Enter the first matrix:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     printf("Enter the second matrix:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
            printf("  %d  ",crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}