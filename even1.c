#include <stdio.h>

int main(void) {
	int a;
scanf("%d\n",&a);
if(a%2==0)
{
	printf("%d\n",a);
	printf("even");
}
else
{
	printf("%d\n",a-1);
	printf(" even");
}
	return 0;
}
