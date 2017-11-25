#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int testNum=0;
	long long int A=0,B=0,C=0;
	long long  int tmp;
	scanf("%d",&testNum);
	for (int i=0;i<testNum;i++)
	{
		cin>>A>>B>>C;
		cout<<"Case #"<<i+1<<": ";
		tmp=A+B;
		if (tmp>C)
		{cout<<"true";}
		else{cout<<"false";}
		cout<<endl;
	}
	return 0;
}