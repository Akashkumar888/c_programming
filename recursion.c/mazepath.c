#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0,downways=0;
    if(cr==er && cc==ec){
        return 1;
    }
   else if(cr==er){      //only rightways
     rightways +=maze(cr,cc+1,er,ec);
    }
   else if(cc==ec){        // only downways
     downways +=maze(cr+1,cc,er,ec);
    }
    else{
    rightways +=maze(cr,cc+1,er,ec);
    downways  +=maze(cr+1,cc,er,ec);
    }
   int totalways= rightways + downways;
   return totalways;
}
int main(){
int n;
printf("Enter the rows:");
scanf("%d",&n);
int m;
printf("Enter the column:");
scanf("%d",&m);
int no_ofways=maze(1,1,n,m);
printf("%d\n",no_ofways);
    return 0;
}