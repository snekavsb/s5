#include <stdio.h>

int main(void) {
	int i,n,a[5],m;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++)
	{
	scanf("%d\n",&a[i]);

	}
	m=a[0];
	for(i=0;i<=n;i++)
	{
	if(a[i]<m)
{
	m=a[i];
}
}
printf(" min=%d\n",m);

	
	
	return 0;
}
