#include <stdio.h>

int main(void) {
	int i,n,a[5],max;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++)
	{
	scanf("%d\n",&a[i]);

	}
	max=a[0];
	for(i=0;i<=n;i++)
	{
	if(a[i]>max)
{
	max=a[i];
}
}
printf(" max=%d\n",max);

	
	
	return 0;
}
