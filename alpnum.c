#include <stdio.h>

int main(void) {
char a[18];
int i,c=0,c1=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++){
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
	c++;
}
else if(a[i]>=1||a[i]<=1000)
{
	c1++;
}
else{}
}
if(c>0&&c1>0)
{
	printf("yes");
}
	return 0;
}
