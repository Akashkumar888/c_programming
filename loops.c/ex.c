#include<stdio.h>
// int main(){
//     int i;
//     while(i=10){
//         printf("%d\n",i);
//         i=i+1;
//     }
//     return 0;
// }

int main(){
    int x=4,y=0,z;
    while(x>=0){
        if(x==y){
            break;
        }
        else{
            printf("\n%d %d",x,y);
        }
        x--;
        y++;
    }
    return 0;
}