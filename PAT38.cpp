#include <iostream>
using namespace std;

int main()
{
	int chenji[101];
	for (int i=0;i<101;i++)
		chenji[i]=0;
	int tmp,N;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		chenji[tmp]+=1;
	}
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		if (i!=0)	cout<<" ";
		cout<<chenji[tmp];
	}
	return 0;
}