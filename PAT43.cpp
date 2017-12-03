#include <iostream>
#include <string>
using namespace std;

int sheng(int *a)
{
	int res=0;
	for (int i=0;i<6;i++)
		res=res+a[i];
	return res;
}

int main()
{
	string str; cin>>str;
	int s[6],len=str.length();
	char aa[6]={'P','A','T','e','s','t'};
	for (int i=0;i<6;i++)		s[i]=0;
	for (int i=0;i<len;i++)
	{
		for (int j=0;j<6;j++)
		{	if (str[i]==aa[j])
			{s[j]+=1;
			break;}
		}
	}
	while (sheng(s))
	{
		for (int i=0;i<6;i++)
		{
			if (s[i]>0)
			{
				cout<<aa[i];
				s[i]-=1;
			}
		}
	}
	return 0;
}