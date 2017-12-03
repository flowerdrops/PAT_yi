#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n,t1,t2;
	cin>>n;
	int *shiji=new int [n+1];
	shiji[0]=0;
	vector<string> v(n+1);
	string tmp;
	for (int i=0;i<n;i++)
	{
		cin>>tmp>>t1>>t2;
		v[t1]=tmp;
		shiji[t1]=t2;
	}
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>t1;
		cout<<v[t1]<<" "<<shiji[t1]<<endl;
	}
	return 0;
}