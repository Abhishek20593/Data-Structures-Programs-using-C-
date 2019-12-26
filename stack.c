#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int display();
int pop();
int push();
int i,top=0,num[50];
int main()
{   int opt;
    printf("\nEnter 3 numbers : ");
    for(top=1;top<=3;top++)
        scanf("%d",&num[top]);
    top--;
    do{
        printf("\n\n<PRESS 1> for PUSH\n<PRESS 2> for POP\n<PRESS 3> for Display\n<PRESS 4> for EXIT\n\nEnter your option : ");    
        scanf("%d",&opt);
        switch(opt)
        {   case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0); 
        }              
    }while(opt!=4);    
    getch();
} 
int push()
{   printf("\nEnter the new number : ");
    scanf("%d",&num[++top]);
}    
int pop()
{   if(top==0)
        printf("\nStack is empty");
    else
        top--;
}    
int display()
{   int j;
    for(j=top;j>=1;j--)
        printf("\n %d",num[j]);
}      

