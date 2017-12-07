#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,sum=0,tmp;
	cin>>n;
	int *data=new int [n];
	for (int i=0;i<n;i++)
		cin>>data[i];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (j!=i)
				sum=sum+10*data[i]+data[j];
		}
	}
	cout<<sum<<endl;
	return 0;
}