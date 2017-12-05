#include <iostream>
#include <string>
using namespace std;

int func(string s)
{
	int ind=0,res=0;
	int len=s.length();
	for (int i=0;i<len;i++)
	{
		if (s[i]=='-')
			ind=i;}
	if (ind==1)	res=s[0]-'0';
	else if (ind ==2)	res=10*(s[0]-'0')+(s[1]-'0');
	else if (ind ==3)	res=100*(s[0]-'0')+10*(s[1]-'0')+(s[2]-'0');
	else res=1000*(s[0]-'0')+100*(s[1]-'0')+10*(s[2]-'0')+(s[3]-'0');
	return res;
}

int main()
{
	int n,fen;
	int duiwu[1001]={0};
	cin>>n;
	string ss;
	for (int i=0;i<n;i++)
	{
		cin>>ss>>fen;
		duiwu[func(ss)]+=fen;
	}
	int max=0,ind=1;
	for (int i=ind;i<1001;i++)
	{
		if (duiwu[i]>max)
		{
			max=duiwu[i];
			ind=i;
		}
	}
	cout<<ind<<" "<<duiwu[ind]<<endl;
	return 0;
}