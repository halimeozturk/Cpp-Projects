#include <iostream>
using namespace std;

template <class T> 

//Girilen üç sayýdan en büyügünü bulan program.

T maksimum(T sayi1,T sayi2,T sayi3)
{
	T max=sayi1;
	
	if(sayi2>max)
	{
		max=sayi2;
	}
	if(sayi3>max)
	{
		max=sayi3;
	}
	
	return max;
}

int main()
{
	int s1,s2,s3;
	
	cout<<"3 sayi giriniz :";
	cin>>s1>>s2>>s3;
	cout<<"Mak deger :"<<maksimum(s1,s2,s3);
	cout<<endl;
	double d1,d2,d3;
	cout<<"double tipte 3 sayi giriniz :";
	cin>>d1>>d2>>d3;
	cout<<"Mak deger :"<<maksimum(d1,d2,d3);
}
