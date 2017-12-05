#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	double sum=0;
	double tmp=0;
	for (int i=0;i<n;i++)
	{
		cin>>tmp;
		sum+=(tmp*(n-i)*(i+1));
	}
	printf("%.2f\n",sum);
	return 0;
}