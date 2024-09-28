#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int pos;
    printf("Enter the position :");
    scanf("%d",&pos);
    if(pos<=n){
    for(i=pos;i<n;i++)
    a[i]=a[i+1];
    for(i=0;i<n-1;i++){
        printf("%d\t",a[i]);
    }
    }
    else{
        printf("Invalid position :");
    }
    return 0;
}