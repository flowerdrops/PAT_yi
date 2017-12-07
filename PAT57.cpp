#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	int sum=0;
	int n=str.length();
	for (int i=0;i<n;i++)
	{
		if ( str[i]-'a'>=0&& str[i]-'a'<26)
			sum=sum+str[i]-'a'+1;
		if ( str[i]-'A'>=0&& str[i]-'A'<26)
			sum=sum+str[i]-'A'+1;
	}
	int res[2]={0};
	while (sum!=0)
	{
		res[sum%2]+=1;
		sum=sum/2;
	}
	cout<<res[0]<<" "<<res[1]<<endl;
	return 0;
}