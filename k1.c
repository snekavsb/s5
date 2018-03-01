#include <stdio.h>

int main(void) {
	int a[4],n,i,k,c=0;
	scanf("%d\n",&n);
	scanf("%d\n",&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&a[i]);

	if(k==a[i])
		{
		c++;
		}
	}
		printf("%d\n",c);
	
	return 0;
}
