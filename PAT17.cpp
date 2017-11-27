#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A;	char R[1000];	int B,Q,chang,tmp,rest=0;
	int a1=0,a2=0;
//	cin>>A>>B;
	A="3"; B=5;
	chang=A.length();		tmp=(int)(A[0]-'0');

	for (int i=0;i<chang;i++)
	{
		tmp=(int)(A[i]-'0');
		a1=(rest*10+tmp);
		R[i]=(char)(a1/B+'0');
		rest=a1%B;		
	}
	Q=rest;
	for (int i=(R[0]=='0');i<chang;i++)
		cout<<R[i];
	if (chang==1)	cout<<"0";
	cout<<" "<<Q;
	return 0;
}

