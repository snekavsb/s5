#include <stdio.h>

int main(void) {
	int r,n;
	scanf("%d\n",&n);
	printf("%d\n",n);

	while(n>0)
	{
		r=n%10;
		
		printf("%d\n",r);
		n=n/10;
	}
	
		
	
	
	
