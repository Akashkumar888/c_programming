#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[7]={1,2,3,4,3,2,1};
    for(int i=0;i<7;i++){
        bool flag=0;
        for(int j=i+1;j<7;j++){
            if(a[i]==a[j]){
              flag=1;
            }
        }
      if(flag==0){
        printf("unique = %d",a[i]);
        break;
      }
    }
    return 0;

}