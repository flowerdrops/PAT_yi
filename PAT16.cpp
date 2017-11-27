#include <iostream>
#include <string>
using namespace std;

int getP(int a,int da)
{
	int tmp=0,iter=0;
	int res=0;
	while (a!=0)
	{
		tmp=a%10;
		if (tmp==da)
		{
			for (int i=0;i<iter;i++)
				tmp=tmp*10;
			res=res+tmp;
			iter+=1;
		}
		a=a/10;
	}
	return res;
}

int main()
{
	long long int A,DA,B,DB;
	cin>>A>>DA>>B>>DB;
	int PA,PB;
	PA=getP(A,DA);		PB=getP(B,DB);
	cout<<PA+PB<<endl;
	return 0;
}