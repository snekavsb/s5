#include <stdio.h>

int main(void) {
	int i,j,a;
	scanf("%d\n%d\n",&i,&j);
	printf("%d\n%d\n",i,j);
	a=i-j;
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
