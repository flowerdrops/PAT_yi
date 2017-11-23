#include <iostream>
#include <string>
using namespace std;

bool judge1(string);
bool judge2(string);
bool judge3(string);

int main(){
    int testnum=1;
    string s;
//    cin>>testnum;
    for (int i=0;i<testnum;i++)
    {
//        cin>>s;
        s="APAAATAA";
        if (judge1(s))
        {
            if(judge2(s))
            {
                cout<<"YES"<<endl;
            }else
            {
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    }
	cin>>s;
    return 0;
}

bool judge1(string s)
{
    bool res=true;
    int len=s.length();
    for (int i=0;i<len;i++)
    {
        res=res*((s[i]=='P')||(s[i]=='A')||(s[i]=='T'));
    }
    return res;
}

bool judge2(string s)
{
	bool res=true;
    int len=s.length();
	for (int i=0;i<len-2;i++)
	{
		if (s.substr(i,3)=="PAT")
		{
			if((i)!=(s.length()-i-3))
			{
				return false;
			}
			for (int j=0;j<i;j++)
			{
				res=res*(s[j]=='A');
			}
			for (int j=i+3;j<len;j++)
			{
				res=res*(s[j]=='A');
			}
			return res;
		}
	}

	for (int i=0;i<len-3;i++)
	{
		if (s.substr(i,4)=="PAAT")
		{
			if((2*i)!=(len-i-4))
			{
				return false;
			}
			for (int j=0;j<i;j++)
			{
				res=res*(s[j]=='A');
			}
			for (int j=i+4;j<len;j++)
			{
				res=res*(s[j]=='A');
			}
			return res;
		}
		}
return false;
	}
















