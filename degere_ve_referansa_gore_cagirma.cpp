#include <iostream>
using namespace std;

int deger_ile_cagirma(int);
void referans_ile_cagirma(int&);

int main()
{
	int x=2,z=4;
	
	cout<<"deger ile den once x=:"<<x<<"\n"<<"deger ilenin dondurdugu deger :"<<deger_ile_cagirma(x) <<endl<<"deger ileden sonra x=:"<<x<<endl;
	
	cout<<"referans dan once z= "<<z<<endl;
	referans_ile_cagirma(z);
	cout<<"referans ileden sonra z= "<<z<<endl;
	 return 0;
}

int deger_ile_cagirma(int a)
{
	return a*=a; // çagırıcının argümanı degiştirilmemiştir.
}

void referans_ile_cagirma(int &c)
{
	c*=c; // çagırıcının argümanı degiştirilmiştir.
}
