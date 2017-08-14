#include <iostream>
using namespace std;
int toplam(int a,int b)
{
		int toplam;
		toplam=a+b;
}
float ortalama(int a,int b)
{
	int ortalama;
	ortalama=toplam(a,b)/2;
	return ortalama;
}

int main()
{
	int x,y;
	cout<<"Ilk sayiyi giriniz :";
	cin>>x;
	cout<<"Ikinci sayiyi giriniz :";
	cin>>y;
	cout<<toplam(x,y)<<endl;
	cout<<ortalama(x,y);
}
