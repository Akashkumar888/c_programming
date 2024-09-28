#include<stdio.h>
int main(){
    typedef struct date{
        int day ;
        int month;
        int year;
    }date;
    date a,b;
    // a->
     a.day=13;
     a.month=7;
     a.year=2003;
 
 //b->
     b.day=13;
     b.month=9;
     b.year=2023;
     if(a.day==b.day && a.month==b.month && a.year==b.year){
        printf("Same\n");
     }
     else{
        printf("Notsame\n");
     }
    return 0;
}