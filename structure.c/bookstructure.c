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
    printf("%.2f\n",a.price);
    printf("%d\n",a.noOfpages);
    printf("%s\n",a.name);
    b.price=1000.50;
    b.noOfpages=100;
    strcpy(b.name,"Famous Five"); 
    printf("%.2f\n",b.price);
    printf("%d\n",b.noOfpages);
    printf("%s\n",b.name);
    return 0;
}