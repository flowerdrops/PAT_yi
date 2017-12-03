#include <iostream>
using namespace std;

int main()
{
	int N,hang;
	char ch;
	cin>>N>>ch;
	if (N%2==0)
		hang=N/2;
	else
		hang=N/2+1;
	for (int i=0;i<N;i++)
		cout<<ch;
	cout<<endl;
	for (int i=0;i<hang-2;i++)
	{
		cout<<ch;
		for (int j=0;j<N-2;j++)
			cout<<" ";
		cout<<ch<<endl;
	}
	for (int i=0;i<N;i++)
		cout<<ch;
	return 0;
}