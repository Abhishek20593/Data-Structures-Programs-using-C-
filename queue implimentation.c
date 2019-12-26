#include<stdio.h>
#define size 5 
int a[size],rear=-1,front=0,item;

int q_full()
{
	if(rear==size-1)
		return 1;
	else
		return 0;
}
int q_empty()
{
	if(front>rear)
		return 1;
	else
		return 0;
}
void insert()
{
	if(q_full()==1)
	{
		printf("\n......Queue is full...\n");
		return;
	}
	else
	{		
		 rear=rear+1;
		 a[rear]=item;	 
	}
}
int delete()
{
	if(q_empty()==1)
	{
		printf("\n......Queue is empty...\n");	
		return 0;
	}
	else
		{
			printf("%d",a[front]);
			front=front+1;
		}
}
int display()
{	int i;
	if(q_empty()==1)
	{
		printf("\n......Queue is empty...\n");	
		return 0;
	}
	else
	{
		printf("displayed queue element are:");
		printf("FRONT->");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",a[i]);	
		}
		printf("<-REAR");
	}
}
main()
{
	int choice;
	while(1)
	{
		printf("\n1:insert  2:delete  3:display  4:exit \n");
		printf("\nenter choice::\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:	printf("\nenter value\n");
   					scanf("%d",&item);
		 			insert();
					break;
			case 2: delete();
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
