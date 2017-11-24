#include <stdio.h>

bool isprime(int);
int main(){
	//results parameters
	int N=0, num_d=0;
	//intermediate parameters
	int last_prime=3,dist=0;

	//scanf("%d",&N);
	N=23;
	for (int i=4;i<=N;i++)
	{
		if (isprime(i))
		{
			dist=i-last_prime;
			if (dist==2)
			{
				num_d=num_d+1;
			}
			last_prime=i;
		}
	}
	printf("%d\n",num_d);
	return 0;
}



bool isprime(int n)
{
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0)		{return false;}		
	}return true;
}








