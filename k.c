#include <stdio.h>

int main(void) {
	int a[4],n,i,k;
	scanf("%d\n",&n);
	scanf("%d\n",&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&a[i]);

	if(k==a[i])
		{
			printf("yes");
		}
	
		}
	
	return 0;
}
