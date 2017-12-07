#include <iostream>
using namespace std;

int main()
{
	int n,D;
	float may=0,kong=0;
	double e,y;
	int k,cnt;
	cin>>n>>e>>D;
	for (int i=0;i<n;i++)
	{
		cnt=0;
		cin>>k;
		for (int j=0;j<k;j++)
		{
			cin>>y;
			if (y<e)	cnt++;
		}
		if (cnt+cnt>(k))
		{
			if (k>D)		kong+=1;
			else	may+=1;
		}
	}
	may=100*may/n;	kong=100*kong/n;
printf("%.1f%% ",may);
 printf("%.1f%%",kong);
	return 0;
}