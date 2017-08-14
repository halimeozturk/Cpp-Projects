#include <iostream>
#include <cmath>
using namespace std;

const double pi=3.14;

inline double kup_hacmi(const double r)
{
	return (4/3)*pi*pow(r,3);
}

int main()
{
	int s1;
	cout<<"Yari cap giriniz :";
	cin>>s1;
	cout<<kup_hacmi(s1);
	
	return 0;	
}
