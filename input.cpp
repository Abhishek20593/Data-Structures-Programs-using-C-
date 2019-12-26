#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	
	char c;
	cout<<"Enter Text:\n";
	getch();
	while(c!='\n')
	{
		cout<<"*";
		c=getch();
		if(c==10)
		break;
	}
	
	cout<<"Original Word:\n";
	cout<<c;
	
	return 0;
}

