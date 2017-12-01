#include <iostream>
#include <string>
using namespace std;

const int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
const char M[11]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

bool exam(string a)
{
	int tmp=0,Z;
	for (int i=0;i<17;i++)
	{
		if ((a[i]-'0'>9)|(a[i]-'0'<0))
			return false;
		tmp=tmp+(a[i]-'0')*quan[i];
	}
	Z=tmp%11;
	if (M[Z]==a[17])
		return true;
	else
		return false;
}

int main()
{
	string sfz;
	int N;
	bool flag=true;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>sfz;
		if (!exam(sfz))
		{
			cout<<sfz<<endl;
			flag=false;
		}			
	}
	if (flag)
		cout<<"All passed"<<endl;
	return 0;
}