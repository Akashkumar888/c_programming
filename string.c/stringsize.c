#include<stdio.h>
#include<string.h>
int main(){
  char str[50];
  puts("Enter the string:");
  gets(str);
int size=strlen(str);
 int n=size;
 printf("size : %d",n);
return 0;
}