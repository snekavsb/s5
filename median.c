#include <stdio.h>

int main(void) {
	int a[90],i,n,j,temp;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{	if(a[i]>a[j])

			{	temp=a[i];
				a[i]=a[j];
				a[j]=temp;
}}}

printf("%d\n",a[n/2]);


return 0;
}
