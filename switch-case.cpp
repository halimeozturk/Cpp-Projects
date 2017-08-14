#include <iostream>
using namespace std;

main()
{
	int x,y,z;
	cout<<"Ilk sayiyiy giriniz :";
	cin>>x;
	cout<<"Ikinci sayiyi giriniz :";
	cin>>y;
	cout<<"Secim yapiniz : \n 1-Toplama \n 2-Cikarma \n 3-Carpma \n 4-Bolme \n"<<endl;
	cin>>z;
	switch(z)
	{
		case 1:
			{
				cout<<x+y;
			}
			break;
		case 2:
			{
				cout<<x-y;
			}
			break;
		case 3:
			{
				cout<<x*y;
			}
		    break;
	    case 4:
	    	{
	    		cout<<x/y;
			}
			break;
		default : 
		    {
		    	cout<<"HATA";
			}
			break;
   }
}
