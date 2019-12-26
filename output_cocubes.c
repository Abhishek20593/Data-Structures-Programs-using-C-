#include<stdio.h>
char myfunc(char a)
{
	a+=2;
	return(a);
	
}
int main()
{
	char a,b;
	a= 'p';
	b=myfunc(a);
	printf("b=%s\n",b);
	return 0;
}
