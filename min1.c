#include <stdio.h>

int main(void) {
	int i,n,b[5],m;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++)
	{
	scanf("%d\n",&b[i]);

	}
	m=b[0];
	for(i=0;i<=n;i++)
	{
	if(b[i]<m)
{
	m=b[i];
}
}
printf(" min=%d\n",m);
	
	
	return 0;
}
