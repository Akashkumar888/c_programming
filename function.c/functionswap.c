#include<stdio.h>
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;// isme to swap ho gaya but main function me swap nhi hua
    return;
}
int main(){
    int a,b;
    printf("Enter the number a and b:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf(" The value of a is :%d\n",a);
    printf(" The value of b is :%d\n",b);
    return 0;
}