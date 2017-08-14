#include <iostream>
#include <conio.h>
using namespace std;

int us_al(int x,int y)
{
	int i,toplam=1;
	for(i=1;i<=y;i++)
	{
		toplam=toplam*x;
    }
		return toplam;
	
}
main()
{
	int taban,us;
	
	cout<<"Taban sayisini giriniz :";
	cin>>taban;
	cout<<"Us sayisini giriniz :";
	cin>>us;
	cout<<us_al(taban,us);
	getch();
	return 0;
	
}
