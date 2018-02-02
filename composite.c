#include <stdio.h>

int main(void) {
int i,n=6,s=0;
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		s++;
	}
}
	if(s!=2)
	{
		printf("composite");
	}
	else
	{
		printf("prime");
	}

	return 0;
}
