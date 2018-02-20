#include <stdio.h>

int main(void) {
int a,b,c;
scanf("%d\n%d\n",&a,&b);
c=a;
a=b;
b=c;
printf("%d\n%d\n",a,b);
	return 0;
}
