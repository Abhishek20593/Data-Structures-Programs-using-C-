#include<stdio.h>
int main()
{
	 int A[10][10],B[10][3],m,n,s=0,i,j;
	 printf("\nEnter order of a sparse matrix\n");
	 scanf("%d%d",&m,&n);
	 printf("\nEnter elements of sparse matrix\n");
	 for(i=0;i<m;i++)
	 { 
	    for(j=0;j<n;j++)
		{
		   printf("\n%d row and %d column:   ",i,j);
		   scanf("%d",&A[i][j]);
        }
     }
     printf("The given matrix is:\n");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
                 printf("%d ",A[i][j]);
        printf("\n");
     }
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
           if(A[i][j]!=0)
           {
			    B[s][0]=A[i][j];
			    B[s][1]=i;
			    B[s][2]=j;
			    s++;
           }
         }
      }
      printf("\nThe sparse matrix is given by");
      printf("\n");
      for(i=0;i<s;i++)
      {
         for(j=0;j<3;j++)
                printf("%d ",B[i][j]);
         printf("\n");
      }
}
