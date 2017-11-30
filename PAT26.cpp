#include <iostream>
using namespace std;

int main()
{
	int C1,C2;
	cin>>C1>>C2;
	int cha=C2-C1;
	int shi,fen,miao,tmp=0;
	if (cha%100>49)
		tmp=1;
	cha=cha/100+tmp;
	shi=cha/3600;	cha=cha%3600;
	fen=cha/60;		cha=cha%60;
	miao=cha;
	//print
	printf("%02d:%02d:%02d",shi,fen,miao);
	return 0;
}