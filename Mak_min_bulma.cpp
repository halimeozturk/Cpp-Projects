#include <iostream>
using namespace std;

main()
{
	int x,y;
	cout<<"Bir sayi giriniz :";
	cin>>x;
	cout<<"Bir sayi giriniz :";
	cin>>y;
	if(x>y)
	{
		cout<<"Maksimum sayi  : "<< x<<endl;
		cout<<"Minimum sayi  : "<<y;
		
	}
	else
	{
		cout<<"Maksimum sayi  : "<<y<<endl;
		cout<<"Minimum sayi  : "<<x;
	}
}
