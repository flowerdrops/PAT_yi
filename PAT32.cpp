#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int N,t1,t2;
	cin>>N;
	vector<int> xuexiao(N+1);
	for (int i=0;i<N;i++)
	{
		cin>>t1>>t2;
		xuexiao[t1]+=t2;
	}
	int max=0,ind=1;
	for (int i=0;i<N;i++)
	{
		if (xuexiao[i]>max)
		{
			max=xuexiao[i];
			ind=i;
		}
	}
	cout<<ind<<" "<<xuexiao[ind]<<endl;
	return 0;
}