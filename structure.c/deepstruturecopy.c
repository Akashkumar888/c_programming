#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int noOfpages;
    }a,b;
    a.price=400.50;
    a.noOfpages=800;
    strcpy(a.name,"Secret Seven"); // copy of intializing
    b.price=a.price;
    b.noOfpages=a.noOfpages;
    strcpy(b.name,a.name); 
    printf("%.2f\n",b.price);
    printf("%d\n",b.noOfpages);
    printf("%s\n",b.name);
    return 0;
}