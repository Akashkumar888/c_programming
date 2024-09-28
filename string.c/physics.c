#include<stdio.h>
#include<string.h>
int main(){
  char str[]="College wallah";
  char *ptr=str;
  ptr="Physics wallah";
  printf("%s\n",str);
  printf("%s",ptr);
return 0;
}