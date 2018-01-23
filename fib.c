#include <stdio.h>

int main(void) {
int a=0,b=1,sum=0,n,i,c;
scanf("%d\n",&n);

for(i=1;i<=n;i++)
{
	sum=a+b;
	printf("%d\n",sum);
	a=b;
	b=sum;
	
}

	return 0;
}
