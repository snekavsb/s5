#include <stdio.h>

int main(void) {
	int a,n,h;
	scanf("%d\n",&a);
	n=a/60;
	h=a%60;
	printf("%d\n%d\n",n,h);
	return 0;
}
