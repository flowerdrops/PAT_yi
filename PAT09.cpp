#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	char seque[100];
	gets(seque);
	int seque_len=strlen(seque);
	int last_word=seque_len;
	for (int i=seque_len-1;i>=0;i--)
	{
		if (seque[i]==' ')
		{
			for (int j=i+1;j<last_word;j++)
				printf("%c",seque[j]);
			printf(" ");
			last_word=i;
		}
		if (i==0)
		{
			for (int j=0;j<last_word;j++)
			printf("%c",seque[j]);
		}
	}
	
	return 0;
}