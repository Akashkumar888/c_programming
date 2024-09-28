#include <stdio.h>

int main(void) {
	int n,i,l;
	scanf("%d",&n);
	for(i=1;i<=10;i++){
	   if(n%i==0)
	   l=i;
	}
	printf("%d\n",l);
	return 0;
}