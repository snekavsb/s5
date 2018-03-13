#include <stdio.h>
#include <string.h>

int main(void) {
	char a[98];
	int c;
	scanf("%s",a);
	c=strlen(a);
	if(c%2==0)
	{
	a[c/2]='*';
	a[c/2-1]='*';
	}
	else
	{
	a[c/2]='*'	;
	}
	printf("%s",a);
	return 0;
}
