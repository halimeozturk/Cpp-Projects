#include <iostream>
using namespace std;


	int kutu_hacmi(int uzunluk=1,int genislik=1,int yukseklik=1);
	
	int main()
	{
		cout<<"varsayilan kutunun hacmi : "<<kutu_hacmi()<<endl;
		cout<<"kutunun hacmi : "<<kutu_hacmi(10)<<endl;		
		cout<<"kutunun hacmi : "<<kutu_hacmi(10,5)<<endl;
		cout<<"kutunun hacmi : "<<kutu_hacmi(10,5,2);
		return 0;
	}
	
	int kutu_hacmi(int uzunluk,int genislik,int yukseklik)
	{
		return uzunluk*genislik*yukseklik;	
	}	
	

