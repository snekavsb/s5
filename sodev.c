include <stdio.h>

int main(void) {
	
	int i;
	char a[6];
	scanf("%s",a);
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]%2!=0)
		{
			printf("%s",a[i]);
		}
	}
	return 0;
}
