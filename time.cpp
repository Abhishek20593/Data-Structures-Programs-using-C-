#include<iostream.h>
#include<time.h>
int main()
{
	for(int i=1;i<=60;i++)
	{
		cout<<i<<"\n";
		for(int i=1;i<=500000000;i++);
	}
	clock_t t;
	t=clock();
	cout<<"Time:"<<(t/CLOCKS_PER_SEC);
}
	
