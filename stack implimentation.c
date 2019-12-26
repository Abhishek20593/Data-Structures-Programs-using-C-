//
#include<stdio.h>
#define max 5 
int a[5],top=-1,item;


int overflow()
{
	if(top==max-1)
		return 1;
	else
		return 0;
}


int underflow()
{
	if(top==-1)
		return 1;
	else
		return 0;
}


void insertion()
{
	if(overflow()==1)
		printf("Stack is full...\n");
	else
		{	printf("Enter item:");
			scanf("%d",&item);
			top=top+1;
			a[top]=item;
		}
}


void deletion()
{
	if(underflow()==1)
		printf("Stack is empty...\n");
	else
		{	printf("Deleted element =%d\n",a[top]);
			top=top-1;	
		}
}


int display()
{	int i;
	if(underflow()!=1)
	{	for(i=top;i>=0;i--)
			printf("%d\n",a[i]);
	}
	else
		printf("empty stack\n");
}




main()
{
	int choice;
	while(1)
	{
		printf("1:insert  2:delete  3:display  4:exit \n");
		printf("enter choice::\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: insertion();
					break;
			case 2: deletion();
					break;
			case 3: display();
					break;
			case 4: exit(0);
					break;
			default: printf("\ninvalid choice!\n");
					 break; 
		}
	}
}
