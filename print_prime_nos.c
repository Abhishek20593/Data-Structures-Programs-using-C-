#include <stdio.h>
int main() 
	{
		int num,i,prime[100],k=2;
		printf("Enter number (less than or equal to 100) \n");
		scanf("%d",&num);
						/*Generate number 1 to n and marked as zero. */
		for(i=2;i<=num;i++)
			{
			  	prime[i]=0;
     		} 
	    while(k<num)
			{
                      /* Marked multiple of number as 1.*/
				for(i=2;num>=k*i;i++)
				{
					prime[k*i]=1;
				}
		 		k++;
			} 
		for(i=2;i<=num;i++)
			{
					/* Number marked left as zero is a prime number.*/
				if(prime[i]==0)
					{
						printf("%d\n",i);
					}
			}
		return 0;
	}

