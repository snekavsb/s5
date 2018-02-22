#include <stdio.h>

int main(void) {
	char a[67];
	int i,b,c=0;
	scanf("%c",&a);
	for(i=0;i!='\0';i++)
	{
		if(a[i]=='')
		{
		b=c++;	
		}
		printf("%d\n",b);
	}
	return 0;
}
