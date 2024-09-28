 #include<stdio.h>
int main(){
    int n;
    printf("Enter the rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            for(int k=1;k<=i-1;k++){
           printf("  ");
            }
        for(int j=i;j<=n;j++){
            printf("* ");
        }
            printf("\n");
    }
    return 0;
}