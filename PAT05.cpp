#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

bool flag[10000]; //flag mean if the index number is covered

int main()
{
	int num_total=0,n;
	scanf("%d",&num_total);
	vector<int> v(num_total);
	vector <int> res;
	for (int i=0;i<num_total;i++)
	{
		scanf("%d",&v[i]);
		n=v[i];
		while (n!=1){
			if (n%2 == 0)
			{
				n=n/2;
				if (flag[n]==true)
				{
					break;
				}
				flag[n]=true;
			}else
			{
				n=(3*n+1)/2;
				if (flag[n]==true)
				{
					break;
				}
				flag[n]=true;
			}
		}
	}
	for (int j=0,l=0;j<num_total;j++)
	{
		if (flag[v[j]]==false)
		{
			res.push_back(v[j]);
		}
	}
	//sort
	for (int m=0;m<res.size()-1;m++){
		for (int n=0;n<res.size()-1;n++){
			if (res[n]<res[n+1]){
				int tmp=res[n];
				res[n]=res[n+1];
				res[n+1]=tmp;
			}
		}
	}
	//print, but be ware of blank
	for (int i=0;i<res.size();i++)
	{
		printf("%d",res[i]);
		if (i!=res.size()-1)
		{
			printf("%c",' ');
		}
	}
	return 0;
}
















