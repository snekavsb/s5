#include <stdio.h>
#include<math.h>

int main(void) {
	int i,b;
	scanf("%d\n",&b);
	printf("%d\n",b);
	
	scanf("%d\n",&i);
	++i;
	
	
	
	if(b==pow(i,2))
	{
		printf(" power ");
	}
	else
	{
		printf("   notpower ");
	}
	
	
	return 0;
}
