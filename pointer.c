#include<stdio.h>
main()
{
	int a,*p,**q;
	p=&a;
	*p=25;
	q=&p;
	printf("\n %d \n %u \n %u \n %d \n %d\n %d \n",a,p,q,*p,*p+2,**q);
}
