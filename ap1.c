#include <stdio.h>

int main(void) {
	int n,a,d,g;
	scanf("%d\n%d\n%d\n",&n,&a,&d);
	g=((0.5*n)*(2*a+(n-1)*d));
printf("ans=%d\n",g);
	return 0;
}
