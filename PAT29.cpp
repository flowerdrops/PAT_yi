#include <iostream>
#include <string>
using namespace std;

int main()
{
	string C1,C2;
	char res[80];
	char prt[80];
	int ind=0,ind2=0;
	
	cin>>C1>>C2;
	int zongchang=C1.length();
	for (int i=0;i<zongchang;i++)
	{
		if (C1[i]!=C2[i-ind])
		{
			res[ind]=C1[i];
			ind+=1;
		}
	}
	bool insert;
	for (int i=0;i<ind;i++)
	{
		if ((res[i]-'a'>=0)&(res[i]-'a'<=26))
			res[i]='A'+res[i]-'a';
		insert=true;
		for (int j=0;j<ind2;j++)
		{
			if (prt[j]==res[i])
			{
				insert=false;
				break;
			}
		}
		if (insert)
		{
			prt[ind2]=res[i];
			ind2+=1;
		}
	}
	for (int i=0;i<ind2;i++)
		cout<<prt[i];

	return 0;
}