#include<stdio.h>
int main(){
    FILE*ptr=fopen("physics wallah.txt","w");
    char str[]="Placement lagegi yahi se physics wallah";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}