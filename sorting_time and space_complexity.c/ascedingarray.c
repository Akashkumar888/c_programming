#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int j=9;
    int target=8;
    while(i<j){
        if(a[i]+a[j]==target){
            printf("%d %d\n",a[i],a[j]);
            printf("(%d,%d)\n",i,j);
            break;
        }
        else if(a[i]+a[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}