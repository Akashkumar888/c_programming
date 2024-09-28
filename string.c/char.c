#include<stdio.h>
int main(){
    // char ch[] = "COLLEGE WALLAH IS BEST CHANNEL FOR CODERS \0";
    char ch[] = "COLLEGE WALLAH IS BEST CHANNEL FOR CODERS ";// computer automatic \0 laga deta hai
        int i=0;
    while(ch[i]!='\0'){
       // printf("%c",ch[i]);
       // printf("%c",i[ch]);
      // printf("%c",*(ch+i));
       printf("%c",*(i+ch));
        i++;
    }
    return 0;
}