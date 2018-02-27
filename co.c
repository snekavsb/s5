#include <stdio.h>

int main(void) {
	int n,c=0,b,t;
	scanf("%d\n",&n);
	while(n!=0)
	{
		b=n%10;
	            t=c++;
	            n=n/10;
	}
		printf("%d\n",t);
	return 0;
}
