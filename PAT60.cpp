#include <iostream>
#include <algorithm>
using namespace  std;

int main()
{
	int n,res=0;
	cin>>n;
	int *x=new int [n];
	for (int i=0;i<n;i++)
		cin>>x[i];
	sort(x,x+n);
	if (x[n-1]==0)
		{cout<<res<<endl;
		return 0;}
	for (int i=1;i<=n;i++)
	{
		if (x[n-i]>i)
			res=i;
		else
			break;
	}
	cout<<res;
	return 0;
}