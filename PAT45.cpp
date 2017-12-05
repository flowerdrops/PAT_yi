#include <iostream>
#include <cmath>
using namespace std;

long long int zhaozuixiao(long long int *data,int ind1,int ind2)
{
	long long int res=data[ind1];
	for (int i=ind1;i<=ind2;i++)
		res=res>data[i]?data[i]:res;
	return res;
}

int main()
{
	int n;
	cin>>n;
	long long int *data=new long long int [n];
	long long int *prt=new long long int [n];
	int ind=0;
	for (int i=0;i<n;i++)		cin>>data[i];
	long long int t1=data[0],t2=data[n-1];
	bool flag=true;
	for (int i=0;i<n;i++)
	{
		flag=true;
		for (int j=0;j<i;j++)
		{if (data[i]<data[j])
			{	flag=false;
				break;}
		}
		if (flag)
		{
			for (int j=i+1;j<n;j++)
			{if (data[i]>data[j])
				{	flag=false;
					break;}
			}
			if (flag)
				prt[ind++]=data[i];
		}		
	}


	/*for (int i=0;i<n;i++)
	{
		t1=data[i]>t1?data[i]:t1;
		t2=zhaozuixiao(data,i,n-1);
		if (data[i]>=t1 && data[i]<=t2)
			prt[ind++]=data[i];
	}*/
	cout<<ind<<endl;
	for (int i=0;i<ind;i++)
	{
		if (i!=0)		cout<<" ";
		cout<<prt[i];
	}
	return 0;

}
