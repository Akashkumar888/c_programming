 #include<stdio.h>
int main(){
    int n;
    printf("Enter the rows :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",i+j+1);
        }
        printf("\n");
    }
    return 0;
}