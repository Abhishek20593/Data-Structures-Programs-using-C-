#include<stdio.h>
int main()
{
	int i,n,pos,arr[10];
	printf("\n ENTER THE NO OF ELEMENTS IN THE ARRAY:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n ENTER THE POSITION FROM WHICH THE NO HAS TO BE DELETED:");
	scanf("%d",&pos);

	for(i=pos;i<n-1;i++)
		arr[i]=arr[i+1];
	n--;
	printf("\n THE ARRAY AFTER THE DELETION IS:");
	for(i=0;i<n;i++)
		printf("\n arr[%d]= %d",i,arr[i]);
	return 0;
}
