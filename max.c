#include <stdio.h>

int main(void) {
int a[5],i,j,n=5,max=0;
for(i=1;i<=n;i++)
{
	scanf("%d\n",&a[i]);

}

for(j=1;j<=n;j++)
{
	if(a[i]>max)
	{
		a[j]=max;
		
		a[i]=a[j];
		max=a[i];
	}
	printf("%d\n",a[j]);


}

	return 0;
}
