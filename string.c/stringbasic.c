#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
    printf("%p\n",&arr[i]);
    }
    printf("\n");
  char ch[5]={'A','K','A','S','H'};
  for(int i=0;i<5;i++){
    printf("%p\n",&ch[i]);
  }
  for(int i=0;i<5;i++){
  printf(" %c ",ch[i]);  
  }
    return 0;
}