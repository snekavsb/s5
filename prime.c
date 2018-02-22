#include <stdio.h>

int main(void) {
	int i,n,c=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
             c++;
            }
}
if(c==2)
{
	printf("prime");
}
else
{
printf("no");

}
	return 0;
}
