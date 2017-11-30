#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

struct people
{
	string name;
	int nian;
	int yue;
	int ri;
};

bool cmp(people a,people b)
{
	bool r1,r2,r3;
	r1=a.nian>b.nian;
	r2=(a.nian==b.nian)&(a.yue>b.yue);
	r3=(a.nian==b.nian)&(a.yue==b.yue)&(a.ri>b.ri);
	return r1|r2|r3;
}

int main()
{
	int N,nian_t,yue_t,ri_t;
	int ind=0;
	vector<people> data;
	people tmp;
	string mingzi,riqi;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>mingzi>>riqi;

		nian_t=1000*(riqi[0]-'0')+100*(riqi[1]-'0')+10*(riqi[2]-'0')+(riqi[3]-'0');
		yue_t=10*(riqi[5]-'0')+(riqi[6]-'0');
		ri_t=10*(riqi[8]-'0')+(riqi[9]-'0');
		if ((nian_t>2014)|(nian_t<1814))
			continue;
		if ((nian_t==2014)&((yue_t>9)|((yue_t==9)&(ri_t>6))))
			continue;
		if ((nian_t==1814)&((yue_t<9)|((yue_t==9)&(ri_t<6))))
			continue;
		tmp.nian=nian_t;
		tmp.yue=yue_t;
		tmp.ri=ri_t;
		tmp.name=mingzi;
		data.push_back(tmp);
		ind+=1;
	}
	sort(data.begin(),data.end(),cmp);
	//print 
	if (ind==0)
		cout<<0;
	else
		cout<<ind<<" "<<data[data.size()-1].name<<" "<<data[0].name;
	return 0;
}