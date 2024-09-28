#include<stdio.h>
#include<string.h>
int main(){
    int a;
  char str[12]="College";
  printf("Enter the index push character:");
  scanf("%d",&a);
  printf("%s\n",str);
  int n=strlen(str);
  for(int i=n;i>=a;i--){
    str[i+1]=str[i];
  }
  str[a]='K';
  printf("%s\n",str);
return 0;
}