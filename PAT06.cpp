#include <stdio.h>

char re_pr[2]={'B','S'};

int main(){
	int testnum=0,rec_num=0;
	int dig[3]={0,0,0}; //record every digit
	scanf("%d",&testnum);
	while (testnum!=0)
	{
		int tmp=testnum%10;
		dig[rec_num]=tmp;
		testnum=testnum/10;
		rec_num+=1;
	}
	// print the result
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<dig[2-i];j++)
		{
			printf("%c",re_pr[i]);
		}
	}
	// careful with number print
	for (int i=0;i<dig[0];i++)
	{
		printf("%d",i+1);
	}
	return 0;
}