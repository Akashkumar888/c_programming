#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "";
    // scanf("%s",str); intput me ek space ke baad word print nhi karega
    scanf("%[^\n]s",str);
   printf("Your input was : %s",str);
return 0;
}