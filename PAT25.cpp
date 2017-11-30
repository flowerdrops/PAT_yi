#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int first,k,n,temp;
	cin>>first>>n>>k;
	vector<int> data(100000),next(100000),list(100000);
	//record
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		cin>>data[temp]>>next[temp];
	}
	// make the list
	int sum=0;
	while (first!=-1){
		list[sum++]=first;
		first=next[first];
	}
	//reverse
	for (int i=0;i<(sum-sum%k);i+=k)
	{
		for (int j=0;j<(k/2);j++)
		{
			swap(list[i+j],list[i+k-j-1]);
		}
	}
	for (int i=0;i<sum-1;i++)
		printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
	printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
	return 0;
}