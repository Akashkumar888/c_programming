 #include<stdio.h>
int main(){
    int n;
    printf("Enter the rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
        }
        else{
        for(int k=1;k<=i;k++){
            printf("%c ",k+64);
        }
        printf("\n");
    }
    }
    return 0;
}