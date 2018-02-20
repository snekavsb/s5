#include <stdio.h>

int main(void) {
int b[5],i,n,max;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
	scanf("%d\n",&b[i]);
}
max=b[0];
for(i=1;i<=n;i++)
{
	if(b[i]>max)
	{
		max=b[i];
	}}
	printf("%d\n",max);
	return 0;
}

