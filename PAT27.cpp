#include <iostream>
using namespace std;

void shuchu(int i,int ind,char fu)
{
	int tmp=ind-i;
	for (int j=0;j<tmp;j++)
		cout<<" ";
	for (int j=0;j<(i*2-1);j++)
		cout<<fu;
//	for (int j=0;j<tmp;j++)
	//	cout<<" ";
	cout<<endl;
}

int main()
{
	int N,ind=1;
	char fu;
	cin >> N>>fu;
	while (N>0)
	{
		N=N-2*(ind*2+1);
		ind++;
	}	
	for (int i=1;i<ind-1;i++)
		shuchu(ind-i,ind-1,fu);
	for (int i=0;i<ind-1;i++)
		shuchu(i+1,ind-1,fu);
	cout<<N+(ind*2-1)*2-1;
	return 0;
}