#include<stdio.h>
int main(){
    FILE*ptr=fopen("akash.txt","r");
    char str[100];
    // if(fgets(str,100,ptr)!=NULL){
    //     printf("%s",str); // for 1 line only
    // }
    while(fgets(str,100,ptr)!=NULL){
        printf("%s",str); 
    }
    
    return 0;
}