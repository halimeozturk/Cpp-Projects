#include <iostream>
#include <math.h>
using namespace std;

int kare(int x)
{
	return x*x;
}

double kare(double y)
{
	return y*y;
}
int main()
{
	int x=7;
	double y=7.5;
	cout<<"7 nin karesi "<<kare(x)<<endl;
	cout<<"7.5 in karesi "<<kare(7.5);
	return 0;
}
