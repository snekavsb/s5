#include <stdio.h>

int main(void) {
	int l,b,h,s,t;
	scanf("%d\n%d\n%d\n",&l,&b,&h);
	printf("%d\n%d\n%d\n",l,b,h);
	s=2*((l*b)+(b*h)+(h*l));
	t=l*b*h;
	printf("%d\n",s);
	printf("%d\n",t);
	
	return 0;
}
