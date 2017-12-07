#include <iostream>
using namespace std;

bool issushu(int n)
{
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0)
			return false;
	}
	return true;
}

int main()
{
	int n,tmp;
	cin>>n;
	int chenji[10001]={0};
	for (int i=0;i<n;i++)
	{
		cin>>tmp;
		chenji[tmp]=i+1;
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		if (chenji[tmp]==0)
			printf("%04d: Are you kidding?\n",tmp);
		else if (chenji[tmp]==-1)
			printf("%04d: Checked\n",tmp);
		else
		{
			if (chenji[tmp]==1)
			{
				printf("%04d: Mystery Award\n",tmp);
				chenji[tmp]=-1;
				continue;
			}
			if (issushu(chenji[tmp]))	
			{
				printf("%04d: Minion\n",tmp);
				chenji[tmp]=-1;
				continue;
			}
			else{
				printf("%04d: Chocolate\n",tmp);
				chenji[tmp]=-1;
				continue;
			}
		}
	}
	return 0;
}