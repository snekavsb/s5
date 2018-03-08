#include <stdio.h>

int main(void) {
	int a[90],i,n,j,temp=0,k;
	scanf("%d\n%d\n",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{	if(a[i]>a[j])

			{	temp=a[i];
				a[i]=a[j];
				a[j]=temp;
	}}}
	printf("%d\n",a[k-1]);
	

	return 0;
}
