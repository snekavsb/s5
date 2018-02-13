#include <stdio.h>

int main(){
	int n,i,max,min,a[5];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
scanf("%d\n",&a[i]);
}
max=a[0];
min=a[0];

for(i=1;i<=n;i++)
{
	if(a[i]>max)
	{
		max=a[i];
		}
		else 
		{
			if(a[i]<min)
		{
			min=a[i];
			}
			else
			{
				
			}
}
}
printf("%d\n%d\n",max,min);

	return 0;
}
