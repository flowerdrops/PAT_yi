#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int arrayNum=0,moveNum=0;
	int data[100];
	int i;
	scanf("%d %d",&arrayNum,&moveNum);
	for (i=moveNum;i<arrayNum+moveNum;i++)
	{
		cin>>data[i%arrayNum];
		arrayNum=arrayNum;
	}
// print the results
	for (i=0;i<arrayNum-1;i++)
	{
		printf("%d ",data[i]);
	}
	printf("%d",data[arrayNum-1]);
	return 0;
}