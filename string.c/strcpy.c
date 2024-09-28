#include<stdio.h>
#include<string.h>
int main(){
  char s1[12]="Akash";
  char s2[12]="wallah";
  strcat(s1,s2);
  printf("%s\n",s1);
  printf("%s\n",s2);
return 0;
}