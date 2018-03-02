#include <stdio.h>

int main(void) {
int a[3],n,i;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	scanf("%d\n",&a[i]);
}
for(i=0;i<n;i++)
{	printf("%d %d\n",a[i],i);
}
	return 0;
}
