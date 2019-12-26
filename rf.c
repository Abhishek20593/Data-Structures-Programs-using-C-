#include<stdio.h>
main()
{
	int a,b;
	printf("enter  a&b: ");
	scanf("%d %d",&a,&b);
	printf("result= %d",power(a,b));
}
int power(int x,int y)
{
	if(y==0)
		return 1;
	else
		return(x*power(x,y-1));
}
