#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int tongji[256];
	for (int i=0;i<256;i++)	tongji[i]=0;
	string str;		getline(cin,str);
	int len=str.length();
	for (int i=0;i<len;i++)
		tongji[(int)(str[i])]+=1;
	int a1='a',a2='z',zuida=0;
	for (int i=a1;i<a2+1;i++)
	{
		tongji[i]=tongji[i]+tongji[i-32];
		zuida=max(zuida,tongji[i]);
	}
	for (int i=a1;i<a2+1;i++)
	{
		if (tongji[i]==zuida)
		{cout<<(char)i<<" "<<tongji[i];
		break;}
	}
	return 0;
}