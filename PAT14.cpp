#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	string str1,str2,str3,str4;
	str1="3485djDkxh4hhGE";
	str2="2984akDfkkkkggEdsb";
	str3="s&hgsfdk";
	str4="d&Hyscvnm";
/*	cin>>str1;
	cin>>str2;
	cin>>str3;
	cin>>str4;*/
	int len1=str1.length(),len2=str2.length(),len3=str3.length(),len4=str4.length();
	int tmp1=0,tmp2=0,tmp3=0;
	for (int i=0;i<min(len1,len2);i++)
	{		
		tmp1=(int)(str1[i]-'A');		
		tmp2=(int)(str1[i]-'Z');
		if ((str1[i]==str2[i]) && (tmp1>=0) && (tmp2<=0)&&((tmp3-1)!=0))
		{
				cout<<week[tmp1]<<" ";  
				tmp3=1;
				continue;
		}
		if ((str1[i]==str2[i]) && (str1[i]>='0') && (str1[i]<='9')&&((tmp3-1)==0))
		{
			cout<<"0"<<tmp1<<":";
			break;
		}
		if ((str1[i]==str2[i]) && (str1[i]>='A') && (str1[i]<='N')&&((tmp3-1)==0))
		{
			cout<<10+(tmp1)<<":";
			break;
		}
	}
	
	for (int i=0;i<min(len3,len4);i++)
	{	
		if (str3[i]==str4[i])
		{
			tmp1=str3[i]-'a';	tmp2=str3[i]-'z';
			if ((tmp1>=0)&&(tmp2<=0))
			{
			if (i>9)		cout<<i;
			else			cout<<"0"<<i;
			break;
			}
			tmp1=str3[i]-'A';	tmp2=str3[i]-'Z';
			if ((tmp1>=0)&&(tmp2<=0))
			{
				if (i>9)		cout<<i;
				else			cout<<"0"<<i;
				break;
			}		
		}			
	}
	return 0;
}