#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string kexue;
	cin>>kexue;
	int chang=kexue.length();
	int ind=0,exind,zhishu=0;
	if (kexue[0]=='-')
		cout<<'-';
	for (int i=1;i<chang;i++)
	{
		if (kexue[i]=='E')
			ind=i;
	}
	
	if (kexue[ind+1]=='-')
	{
		cout<<"0.";
		exind=chang-ind-2;
		zhishu=0;
		for (int i=0;i<exind;i++)
		{
			zhishu+=(kexue[chang-i-1]-'0')*pow(10.0,i);
		}
		for (int i=0;i<zhishu-1;i++)
			cout<<0;
		for (int i=1;i<ind;i++)
		{
			if (kexue[i]!='.')
				cout<<kexue[i];
		}
			
	}
if (kexue[ind+1]=='+')
{
	exind=chang-ind-2;
    zhishu=0;
	for (int i=0;i<exind;i++)
	{
		zhishu+=(kexue[chang-i-1]-'0')*pow(10.0,i);
	}
	int shu=ind-3;
	if (zhishu>=shu)
	{
		for (int i=1;i<ind;i++)
		{
			if (kexue[i]!='.')
				cout<<kexue[i];
		}
		for (int i=0;i<zhishu-shu;i++)
			cout<<0;
	} else if (zhishu<shu)
	{
		for (int i=1;i<zhishu+3;i++)
		{	if (kexue[i]!='.')
		cout<<kexue[i];}
		cout<<".";
		for (int i=zhishu+3;i<ind;i++)
		{
			if (kexue[i]!='.')
				cout<<kexue[i];
		}
	}
}

	return 0;
}