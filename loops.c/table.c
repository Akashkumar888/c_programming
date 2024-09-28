#include<stdio.h>
int main(){
    int n,table;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        for(int j=1;j<=n;j++){
            table=i*j;
    printf("%d\t",table);
        }-
        
    printf("\n");
    }
    return 0;
}