 #include<stdio.h>
int main(){
    int n;
    printf("Enter the rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(j%2!=0 && i%2!=0){
            printf(" * ");
        } 
        else{
            printf("  ");
        }
        }
        printf("\n");
    }
    return 0;
}