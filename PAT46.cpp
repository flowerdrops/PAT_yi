#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int han1,hua1,han2,hua2;
	int tmp;
	int jia=0,yi=0;
	for (int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&han1,&hua1,&han2,&hua2);
		tmp=han1+han2;
		if (hua1==tmp && hua2!=tmp)
			jia++;
		if (hua1!=tmp && hua2==tmp)
			yi++;
	}
	printf("%d %d",yi,jia);
	return 0;
}