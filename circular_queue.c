#include<stdio.h>
#define max 4
int front=-1,rear=-1,q[max];
int c_q_full()
{
	if(front==(rear+1)%max)
		return 1;
	else
		return 0;
}
void c_q_insert()
{
	int item;
	if(c_q_full()==1)
		printf("OVERFLLOW!!!!!!");
	else
	{
		if(front==-1)
			front=0,rear=0;
		else
			rear=(rear+1)%max;
		printf("enter the item:\n");
		scanf("%d",&item);
		q[rear]=item;
		printf("inserted item is %d",item);
	}
}
int c_q_empty()
{
	if(front==-1)
		return 1;
	else
		return ;
}
void c_q_delete()
{
	int item;
	if(c_q_empty()==1)
		printf("UNDERFLOW!!!!!");
	else
	{
		item=q[front];
		if(front==rear)
			front=-1,rear=-1;
		else
			front=(front+1)%max;
	}
	printf("The deleted item is \t%d",item);
}
void display()
{
	int i;
	if(c_q_empty()==1)
		printf("UNDERFLOW!!!!!");
	else
	{
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d\t",q[i]);
			}
		}
		else
		{
			for(i=front;i<=max-1;i++)
				printf("%d\t",q[i]);
			for(i=0;i<=rear;i++)
				printf("%d\t",q[i]);
		}
	}
}
int main()
{
	int choice;
	while(1)
	{
		 printf("\n\n1:insert\n2:deletion\n3:display\n4:exit\n\nEnter choice:");
         scanf("%d",&choice);
         switch(choice)
         {
         	case 1: c_q_insert();
         			break;
			case 2: c_q_delete();
					break;
			case 3: display();
					break;
			case 4: return 0;
			default: printf("\n\nINVALID CHOICE");
				     break;
         }
	}
}

