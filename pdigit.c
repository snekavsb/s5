#include <stdio.h>

int main(void) {
	int n,a,mul=1;
	scanf("%d\n",&n);
while(n>0)
{
a=n%10;
mul=mul*a;
n=n/10;
}

printf("%d\n",mul);
	
	return 0;
}
