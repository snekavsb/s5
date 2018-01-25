#include <stdio.h>

int main(void) {
	int a,b,c,d;
	scanf("%d\n%d\n%d\n",&a,&b,&c);
	printf("%d\n%d\n%d\n",a,b,c);
	d=((a*b)%c);
	printf("%d\n",d);
	return 0;
}
