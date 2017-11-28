#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A,B,D,ind=0;
	cin>>A>>B>>D;
	int prt[32];
	int tmp=A+B;
	if (tmp==0)
	{
		cout<<ind;
		return 0;
	}
	while (tmp!=0)
	{
		prt[ind]=tmp%D;
		tmp=tmp/D;
			ind+=1;
	}
	for (int i=0;i<ind;i++)
		cout<<prt[ind-i-1];
	return 0;
}