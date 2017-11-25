#include <iostream>
#include <vector>
using namespace std;

bool isprime(int);

int main()
{
	int bottom=0,upper=0,PNum=0,tNum=2;
	int iter=0;
	vector<int> data;
	cin>>bottom>>upper;
	while (PNum<upper)
	{
		if (isprime(tNum))
		{
			PNum+=1;
			if (PNum>=bottom)
			{
				data.push_back(tNum);				
			}
		}
		tNum+=1;
	}

	//print
	while (!data.empty())
	{
		cout<<data[0];
		data.erase(data.begin());
		if (data.empty())	break;
		if (iter==9)			
		{
			cout<<endl;
			iter=-1;
		}
		else			cout<<" ";
		iter+=1;
	}
		
	return 0;
}

bool isprime(int n)
{
	for (int i=2;i*i<=n;i++)
	{
		if ((n%i)==0)
			return false;
	}
	return true;
}