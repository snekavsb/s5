#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d\n%d\n",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\n%d\n",a,b);
	return 0;
}
