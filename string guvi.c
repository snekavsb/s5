#include <stdio.h>


int main(void) {
	char a[89];
	int i,n;
	scanf("%d\n",&n);
	scanf("%s",&a);
	for(i=0;i<=n;i++)
	{
		if(a[i]>1&&a[i]<1000)
		{
	printf("%s",a[i]);	
	}
	}	
	return 0;
}
