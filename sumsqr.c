#include <stdio.h>

int main(void) {
	int n,a,sum=0,r;;
	scanf("%d\n",&n);
	while(n>0)
	{
	a=n%10;
             r=a*a;
             sum=sum+r;
	n=n/10;
	}
	printf("%d\n",sum);
	return 0;
}
