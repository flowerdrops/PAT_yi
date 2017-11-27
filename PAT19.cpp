#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp1(int a,int b)
{
	return a>b;
}

bool cmp2(int a,int b)
{
	return a<b;
}
void play(int N)
{
	int a[4];
	int N1,N2;
	for (int i=0;i<4;i++)
	{a[i]=N%10;	N=N/10;}
	sort(a,a+4,cmp1);	
	N1=a[3]+10*a[2]+100*a[1]+1000*a[0];
	N2=a[0]+10*a[1]+100*a[2]+1000*a[3];	
	//print
	for (int i=0;i<4;i++)
		cout<<a[i];
	cout<<" - ";
	for (int i=0;i<4;i++)
		cout<<a[3-i];
	cout<<" = ";
	N=N1-N2;
	for (int i=0;i<4;i++)
	{a[i]=N%10;	N=N/10;}
	for (int i=0;i<4;i++)
		cout<<a[3-i];
	cout<<endl;

	if ((N1-N2==0)||(N1-N2==6174))
		return;
	else
		play(N1-N2);
}

int main()
{
	int N=1234;
//	cin>>N;
	play(N);
	return 0;
}