#include <iostream>
#include <string>
#include <cmath>
using namespace std;

char zhao[3]={'B','C','J'};
char findprt(int a[3])
{
	int ind=(a[1]>=a[2])?1:2;

	ind=(a[ind]>a[0])?ind:0;
	return zhao[ind];
}

int main()
{
	int N, jia_s=0,yi_s=0;
	int jia[3]={0,0,0},yi[3]={0,0,0};
	char A1,A2;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>A1>>A2;
		if (A1==A2)
			continue;
		if (A1=='C')
		{	if (A2=='B'){
				yi_s+=1;	yi[0]+=1;}
			if (A2=='J'){
				jia_s+=1;	jia[1]+=1;}
		}

		if (A1=='B')
		{	if (A2=='C'){
				jia_s+=1;	jia[0]+=1;}
			if (A2=='J'){
				yi_s+=1;	yi[2]+=1;}
		}

		if (A1=='J')
		{	if (A2=='B'){
				jia_s+=1;	jia[2]+=1;}
			if (A2=='C'){
				yi_s+=1;	yi[1]+=1;}
		}
	}
	//print
	cout<<jia_s<<" "<<N-jia_s-yi_s<<" "<<yi_s<<endl;
	cout<<yi_s<<" "<<N-jia_s-yi_s<<" "<<jia_s<<endl;
	cout<<findprt(jia)<<" "<<findprt(yi)<<endl;
	return 0;
}