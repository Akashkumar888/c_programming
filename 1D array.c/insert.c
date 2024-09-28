#include<stdio.h>
int main(){
    int i,element,pos,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to insert:");
    scanf("%d",&element);
    printf("Enter position:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--){
     a[i+1]=a[i];
    }
    a[pos-1]=element;
    n++;
    printf("\nThe new Array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
