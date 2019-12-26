/*IMPLEMENTATION OF PRIORITY QUEUE USING ARRAY */


#include<stdio.h>
#include <stdlib.h>
#define SIZE 5 
int PQ[SIZE],f=0,r=-1; 


int Qfull()
{                     
    if(r==SIZE-1) 
		return 1;
    else
    	return 0;
}


int Qempty()
{                   
    if(f > r) 
		return 1;
	else
    	return 0;
}  

    
void PQ_insert(int data)
{
    int i;       
    if( Qfull()==1) 
		printf("\n\n Overflow!!!!\n\n");
    else
    {
        i=r;
        ++r;
        while(PQ[i] >= data && i >= 0)
        {
            PQ[i+1]=PQ[i];
            i--;
        }
        PQ[i+1]=data;
    }
}



void deletion()
{
	if(Qempty()==1)
		printf("Queue is empty...\n");
	else
		{
			printf("Deleted element =%d\n",PQ[f]);
			f=f+1;	
		}
}


void PQ_display()
{                  
    int i;
    if(Qempty()==1)
		 printf(" \n Empty Queue\n");
    else
    {
        for(i=f;i<=r;i++)
            printf("%d ",PQ[i]);
    }
}


int main()
{                         
    int opn,data;
    while(1)
    {
        printf("\n Press 1-Insert, 2-Delete,3-Display,4-Exit\n");
        printf("\n Your option :: ");
        scanf("%d",&opn);
        switch(opn)
        {
        case 1: printf("\n\nthe element to be Inserted: ");
	            scanf("%d",&data);
	            PQ_insert(data); 
				break;
        case 2: deletion();
           	    
            	break;
        case 3: printf("\n\nStatus of Queue\n\n");
            	PQ_display(); 
				break;
        case 4: exit(0);
				break;	
        default: printf("\n\nInvalid Option \n\n");
      		     break;
        }
    }
}

