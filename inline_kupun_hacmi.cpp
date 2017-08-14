#include <iostream>
using namespace std;

inline double kup(const double s)
{
	return s*s*s;
}
int main()
{
	double kenar;
	
	for(int k=1;k<4;k++)
	{
		cout<<"kupun bir kenarini giriniz :";
		cin>>kenar;
		cout<<"Kenari   "<<kenar<<"   olan kupun hacmi  "<<kup(kenar);
		
	}
	return 0;
}
