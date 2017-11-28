#include <iostream>
#include <string>
using namespace std;

int main()
{
	int wei[10];
	for (int i=0;i<10;i++)
		cin>>wei[i];
	//none zero head
	for (int i=1;i<10;i++)
	{
		if (wei[i]!=0)
		{
			cout<<i;
			wei[i]-=1;
			break;
		}
	}
	for (int i=0;i<10;i++)
	{
		for (int j=0;j<wei[i];j++)
			cout<<i;
	}
	return 0;
}