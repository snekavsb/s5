#include <stdio.h>

int main(void) {
int a=0,b=1,s=0,n,i,c;
scanf("%d\n",&n);

for(i=1;i<=n;i++)
{
	s=a+b;
	printf("%d\n",s);
	a=b;
	b=s;
	
}

	return 0;
}
