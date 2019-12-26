#include<iostream>
using namespace std;
int main()
{
	int a[50];
	int c=0;
	int r=0;int n;
	cout<<"Enter a Number:";
	cin>>n;
	do{
		r=n%2;
		a[c]=r;
		n=n/2;
		c++;
	}while(n!=0);
	cout<<"The equivalent binary is:";
	for(int i=c-1;i>=0;i--)
		cout<<a[i];
	cout<<"\n";
	return 0;
}
