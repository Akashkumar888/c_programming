#include<stdio.h>
#include<string.h>
int main(){
  char str[50];
  puts("Enter the string:");
  gets(str);
  int i=0;
  int size=0;
 while(str[i]!='\0'){
    size++;
    i++;
 }
 int n=size;
 for(int i=n;i>=0;i--){
    printf("%c",str[i]);
 }
return 0;
}