#include<stdio.h>
#include<string.h>
int main(){
  char s1[]="Physics wallah";
  char s2[]="Physics wallah";
  s2[0]='M';
  printf("%p\n",&s1);
  printf("%p\n",&s2);
  printf("%s\n",s1);
  printf("%s",s2);
return 0;
}