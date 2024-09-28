

#include<stdio.h>
int main(){
    int n=10;
    for(int i=1;i<=n;i++){
     if(i%2!=0) continue;
     else printf("%d\t",i);
    }
    return 0;
}