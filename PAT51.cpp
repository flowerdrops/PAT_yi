#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double r1,p1,r2,p2;
	cin>>r1>>p1>>r2>>p2;
	double R,P;
	R=r1*r2;
	P=p1+p2;
	double a,b;
	a=R*cos(P);
	b=R*sin(P);
	if (a+0.005>=0 && a<0)
		printf("0.00");
	else		printf("%.2f",a);
	if (b>=0)	printf("+%.2fi",b);
	else if (b+0.01>=0 && b<0)		printf("+0.00i");
	else printf("%.2fi",b);
	return 0;
}