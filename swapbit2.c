#include <stdio.h>

int main(void) {
	int c,d;
	scanf("%d\n%d\n",&c,&d);
	c=c^d;
	d=c^d;
	c=c^d;
	printf("%d\n%d\n",c,d);
	return 0;
}
