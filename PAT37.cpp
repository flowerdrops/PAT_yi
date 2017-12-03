#include <iostream>
using namespace std;

int main()
{
	int yingfu[3],shifu[3];
	int huilv[2]={17,29};
	long long int A,P;
	int res[3];
	long long int tmp;
	scanf("%d.%d.%d %d.%d.%d",&yingfu[0],&yingfu[1],&yingfu[2],&shifu[0],&shifu[1],&shifu[2]);
	P=yingfu[0]*17*29+yingfu[1]*29+yingfu[2];
	A=shifu[0]*17*29+shifu[1]*29+shifu[2];
	tmp=A-P;
	if (tmp>=0)
	{
		res[2]=tmp%29;	tmp=(tmp-res[2])/29;
		res[1]=tmp%17;	
		res[0]=(tmp-res[1])/17;
	}
	else
	{
		tmp=-tmp;
		res[2]=tmp%29;	tmp=(tmp-res[2])/29;
		res[1]=tmp%17;	
		res[0]=-(tmp-res[1])/17;
	}
/*	for (int i=2;i>0;i--)
	{
		if (shifu[i]-yingfu[i]<0)
			{
			res[i]=shifu[i]+huilv[i-1]-yingfu[i];
			shifu[i-1]-=1;
			}
		else
			res[i]=shifu[i]-yingfu[i];
		}
	res[0]=shifu[0]-yingfu[0];*/
	printf("%d.%d.%d\n",res[0],res[1],res[2]);
	
	return 0;
}