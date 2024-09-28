#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the number :");
   scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            printf(" %d ",j);
        }
        for(k=1;k<=2*(i-1);k++){
            printf(" * ");
        }
        for(l=n-i+1;l>=1;l--){
            printf(" %d ",l);
        }
        printf("\n");
    }
    return 0;
}