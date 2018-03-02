#include <stdio.h>

int main(void) {
	int r,a;
	scanf("%d\n",&a);
	printf("%d\n",a);

	while(a>0)
	{
		r=a%10;
		
		printf("%d",r);
		a=a/10;
	}
	
	return 0;
}
	
	
