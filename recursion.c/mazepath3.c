#include<stdio.h>
int maze2(int n,int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    else if(n==1){
        rightways+=maze2(n,m-1);
    }
    else if(m==1){
        downways+=maze2(n-1,m);
    }
    else{
        rightways+=maze2(n,m-1);
        downways+=maze2(n-1,m);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
int n;
printf("Enter the rows:");
scanf("%d",&n);
int m;
printf("Enter the column:");
scanf("%d",&m);
int no_ofways=maze2(n,m);
printf("%d\n",no_ofways);
    return 0;
}