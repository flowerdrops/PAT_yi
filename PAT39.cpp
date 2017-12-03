#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mai,yao;
//	cin>>mai>>yao;
	mai="YrR8RrY";
	yao="YrR8RrY";
	int n_yao=yao.length(),n_mai=mai.length();
	int s_yao=n_yao,s_mai=n_mai;
	for (int i=0;i<n_yao;i++)
	{
		for (int j=0;j<n_mai;j++)
		{
			if (yao[i]==mai[j])
			{
				s_yao-=1;
				s_mai-=1;
				yao[i]='*';
				mai[j]='*';
				break;
			}
		}
	}
	if (s_yao==0)
		cout<<"Yes "<<s_mai;
	else
		cout<<"No "<<s_yao;
	return 0;
}