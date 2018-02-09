#include <stdio.h>

int main(void) {
	int n,count=0;
	scanf("%d\n",&n);
	while(n!=0)
	{
		n=n/10;
		count ++;
	}
	printf("%d\n",count);
	return 0;
}
