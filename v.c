#include <stdio.h>

int main(void) {
	char c;
	
	scanf("%c\n",&c);
	if((c='a')||(c='e')||(c='i')||(c='o')||(c='u')||(c='A')||(c='E')||(c='I')||(c='O')||(c='U'))
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
