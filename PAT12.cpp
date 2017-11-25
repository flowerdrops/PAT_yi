#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	bool flag[5]={true,true,true,true,true};
	int A[5]={0,0,0,0,0};
	int test,testNum,tmp=1,A3_add=0;
	int a=max(3,4);
	scanf("%d",&testNum);
	for (int i=0;i<testNum;i++)
	{
		scanf("%d",&test);
		if (test%10==0)//A1
		{
			flag[0]=false;
			A[0]+=test;
		}
		if (test%5==1)//A2
		{
			flag[1]=false;
			A[1]+=tmp*test;
			tmp=-tmp;
		}
		if (test%5==2)//A3
		{
			flag[2]=false;
			A[2]+=1;
		}
		if (test%5==3)//A4
		{
			flag[3]=false;
			A[3]+=test;
			A3_add+=1;
		}
		if (test%5==4)//A5
		{
			flag[4]=false;
			A[4]=max(A[4],test);
		}
	}
	//print		
	for (int i=0;i<3;i++)
	{
		if (flag[i])   {cout<<"N ";}
		else   {	cout<<A[i]<<" ";}
	}
	if (flag[3])  {cout<<"N ";}
		else   { printf("%.1f ", float((float)A[3]/(float)A3_add));	}

	if (flag[4]) {cout<<"N";}
		else   {cout<<A[4];}
	return 0;
}