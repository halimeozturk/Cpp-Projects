#include <iostream>
using namespace std;

int main()
{
	int x=3;
	int &y=x; //y x i�in takma ad.
	
	cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
	y=7;
	cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
	return 0;
}
