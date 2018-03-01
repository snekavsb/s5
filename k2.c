#include <stdio.h>

int main(void) {
	int a[4],n,i,k,c=1;
	scanf("%d\n",&n);
	scanf("%d\n",&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&a[i]);

	if(a[i]%2!=0)
		{
		if(c==k)
	{
		printf("%d\n",a[i]);
	}	
	c++;	
		}
	
	}	
	
	return 0;
}
