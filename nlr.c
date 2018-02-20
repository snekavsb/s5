#include <stdio.h>
int main(void) {
	int n,l,r;
	scanf("%d\n%d\n%d\n",&n,&l,&r);
	if(n>l&&n<r)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
