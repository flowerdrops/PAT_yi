#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	
	int tongji[10]={0,0,0,0,0,0,0,0,0,0};
	cin>>num;
	int chang=num.length();
	for (int i=0;i<chang;i++)
		tongji[num[i]-'0']+=1;
	for (int i=0;i<10;i++)
	{
		if (tongji[i]!=0)
			cout<<i<<":"<<tongji[i]<<endl;
	}
		
	return 0;
}