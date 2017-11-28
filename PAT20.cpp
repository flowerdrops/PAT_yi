#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


struct huo{
float kucun;
float zong;
float jun;
};

bool cmp(huo a,huo b)
{
	return a.jun>b.jun;
}

int main()
{
	int N,D;
	vector<huo> v;
	huo tmp;
	cin>>N>>D;
	for (int i=0;i<N;i++)
	{	cin>>tmp.kucun;
		v.push_back(tmp);	}
	for (int i=0;i<N;i++)
	{
		cin>>v[i].zong;
		v[i].jun=v[i].zong/v[i].kucun;
	}

	sort(v.begin(),v.end(),cmp);
	float shouyi=0,mai=0;
	for (int i=0;i<N;i++)
	{
		if (D==0)			break;
		mai=D>v[i].kucun?v[i].kucun:D;
		D-=mai;
		shouyi+=mai*v[i].jun;
	}
	printf("%.2f",shouyi);
	return 0;
}