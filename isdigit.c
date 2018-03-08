#include <stdio.h>
#include<ctype.h>

int main(void) {
	char a[89];
	int i;
	scanf("%s\n",a);
	for(i=0;a[i]!='\0';i++)
	if(isdigit(a[i]))
	{
		printf("%c",a[i]);
	}
	return 0;
}
