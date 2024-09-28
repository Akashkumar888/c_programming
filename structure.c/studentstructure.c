// error//

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct students{
    int rollno;
    char name[20];
    char dept[20];
    char couse[20];
    int yearofjoining;
}students;
void check(students p1,students p2){
  if(p1.rollno==p2.rollno && p1.name==p2.name && p1.dept==p2.dept && p1.couse==p2.couse && p1.yearofjoining==p2.yearofjoining){
    printf("Same\n");
  }
  else{
    printf("No\n");
  }
  return ;
}
int main(){
students s1,s2;
    s1.rollno=2201216;
    strcpy(s1.name,"Akash kumar");
    strcpy(s1.dept,"CSE");
    strcpy(s1.couse,"Enginnering");
    s1.yearofjoining=2022;

    s2.rollno=2201216;
    strcpy(s2.name,"Akash kumar");
    strcpy(s2.dept,"CSE");
    strcpy(s2.couse,"Enginnering");
    s2.yearofjoining=2022;

    check(s1,s2);
    return 0;
}