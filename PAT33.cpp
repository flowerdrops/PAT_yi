#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool exam(string a,char t,bool f)
{
	if (f)
	{
		if ((t-'A')<26&&(t-'A')>-1)
			return false;
	}
	int n=a.length();
	for (int i=0;i<n;i++)
	{
		if (a[i]==t)
			return false;
		if ((a[i]-'A')<26&&(a[i]-'A')>-1)
		{if ((char)(a[i]-'A'+'a')==t)
		return false;}
	}
	return true;
}


int main()
{
	string huai,shuru;
	bool shangdang=false;
//	cin>>huai>>shuru;
	getline(cin,huai);
  	getline(cin,shuru);
	huai="7+IE.";
	int N=huai.length();
	for (int i=0;i<N;i++)
	{
		if (huai[i]=='+')
		{shangdang=true;
		break;}
	}
	shuru="7_This_is_a_test.";
	N=shuru.length();
	for (int i=0;i<N;i++)
	{
		if (exam(huai,shuru[i],shangdang))
			cout<<shuru[i];
	}
	cout<<endl;
	return 0;
}