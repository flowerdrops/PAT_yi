#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(float a,float b)
{return a<b;}

int main()
{
	int N,count=0;
	float p,tmp;
	cin>>N>>p;
	vector<float> data(N);
	
	for (int i=0;i<N;i++)
		cin>>data[i];
	sort(data.begin(),data.end(),cmp);
	for (count=N;count>=1;count--)
	{
		for (int i=0;i+count-1<N;i++)
		{
			if (data[i]*p>=data[i+count-1])
			{
				cout<<count;
				return 0;
			}
		}
	}
	cout<<count;
	return 0;
}