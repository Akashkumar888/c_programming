 #include<stdio.h>
int main(){
    int n;
    printf("Enter the rows :");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int p=1;p<=2*n+1;p++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
         printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
         printf("*");
        }
        nst--; 
        nsp=nsp+2;
        printf("\n");
    }
    return 0;
} 