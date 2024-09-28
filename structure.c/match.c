#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int noOfmatches;
        float average;
    }cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++){
        char name[20];
       scanf("%s",arr[i].name);
       scanf("%d",&arr[i].age);
       scanf("%d",&arr[i].noOfmatches);
       scanf("%f",&arr[i].average);

    }
    for(int i=0;i<3;i++){
       printf("Name : %s\n",arr[i].name);
       printf("Age : %d\n",arr[i].age);
       printf("No of matches played : %d\n",arr[i].noOfmatches);
       printf("Average : %f\n",arr[i].average);
       printf("\n");
    }
    return 0;
}