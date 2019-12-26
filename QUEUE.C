#include<stdio.h>
#define SIZE 5           
int Q[SIZE],f=0,r=-1;       
int Qfull()
{                     
    if(r==SIZE-1)            return 1;
    else                     return 0;
}
int Qempty()
{                   			 
    if(f > r) 				 return 1;
    else                     return 0;
}
void Qinsert(int elem)
{                       
    if( Qfull()==1) 
		printf("\n\n QUEUE IS FULL!!!\n\n");
    else
    { ++r; Q[r]=elem; }
}
void Qdelete()
{                      
    int element;
    if(Qempty()==1) 
		printf("\n\nQUEUE IS EMPTY!!!\n\n");
    else
    {	printf("deleted element=%d",Q[f]); element=Q[f];  f=f+1;}
}
int display()
{                  
    int i;
    if(Qempty()==1) 
		printf(" \n!!!Empty Queue!!!\n");
    else
    {
        printf("Front->");
        for(i=f;i<=r;i++)
            printf("%d ",Q[i]);
        printf("<-Rear");
    }
}
int main()
{                         
    int ch,elem;
    while(1)
    {
	printf("\n Press 1-Insert, 2-Delete,3-Display,4-Exit\n");
	printf("\nENTER CHOICE:"); scanf("%d",&ch);
        switch(ch)
        {
        case 1: printf("\n\n element value:");scanf("%d",&elem);
            	Qinsert(elem); break;
        case 2:	Qdelete();break;
        case 3: printf("\n\nQueue is \n\n");
                display(); break;
        case 4:  return 0;
        default: printf("\n\nInvalid Option !!! Try Again !! \n\n");break;
        }
    }
}
