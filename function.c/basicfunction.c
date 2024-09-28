#include<stdio.h>
void england(){ // void return mtlb empty return //
    printf("You are in England\n"); //6
    return;   //7   //return england se australia se india se main function
}
void australia(){
    printf("You are in Australia\n"); //4
    england(); //5
    return; //8
}
void india(){
    printf("You are in India\n"); //2
    australia(); //3
    return; //9
}
int main(){
    india(); // line 1
    return 0; //10    // return turant khatm nhi hoga
}

// when function prototype not use the order is neccessary of function //
// main () ek hi bar aata hai
// starts with main
// unlimited function