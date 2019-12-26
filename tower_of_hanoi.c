#include<stdio.h>
void towers(int,char,char,char);
main()
	{ int disk;
	  printf("Enter the number of disks :\t ");
	  scanf("%d",&disk);
	  printf("The Tower of Hanoi involves the moves :\n");
	  towers(disk,'S','D','A');
	  return 0;
	}
void towers(int n,char source,char destination,char auxiliary)
	{ /* If only 1 disk, make the move and return */
	  if(n==1)
	    { printf("\nMove disk 1 from  %c to  %c",source,destination);
	      return;
	    }
	  /* Move top n-1 disks from S to D, using A as auxiliary */
	  towers(n-1,source,auxiliary,destination);
	  /* Move remaining disks from S to A */
	  printf("\nMove disk %d from  %c to  %c",n,source,destination);
	  /* Move n-1 disks from D to A using S as auxiliary */
	  towers(n-1,auxiliary,destination,source);
	}
	
