#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class futbol_takimi{
	public:
		void yazdir();
		void setle(string,int,int,int,int,int);
		bool karsilastir(futbol_takimi &);
		void puan_hesapla();
	private:
		string takim_adi;
		int maglubiyet,galibiyet,beraberlik,attigi_gol,yedigi_gol,everaj,puan;
		
};

void futbol_takimi::yazdir()
{
	cout<<maglubiyet<<endl<<galibiyet<<endl<<beraberlik<<endl<<attigi_gol<<endl<<yedigi_gol<<endl<<everaj<<puan<<endl;
}

void futbol_takimi::setle(string ad,int m,int g,int b,int a,int y){
	takim_adi=ad;
	maglubiyet=m;
	galibiyet=g;
	beraberlik=b;
	attigi_gol=a;
	yedigi_gol=y;
	puan_hesapla();
}
bool futbol_takimi::karsilastir(futbol_takimi &diger){
	
	if(puan>diger.puan)
	{
		return true;
	}
	if(puan==diger.puan && everaj>=diger.puan)
	{
		return true;
	}
	return false;
}
void futbol_takimi::puan_hesapla()
{
	puan=galibiyet*3+beraberlik;
	everaj=attigi_gol - yedigi_gol;
}

void sirala(futbol_takimi *takimlar,int takim_sayisi)
{
	int konum;
	futbol_takimi temp;
	for(int i=0;i<(takim_sayisi-1);i++)
	{
		konum=i;
			for(int j=i+1;j<takim_sayisi;j++)
			{
				if(!takimlar[konum].karsilastir(takimlar[j]))
				konum=j;
			}
			if(konum!=i)
			{
				temp=takimlar[i];
				takimlar[i]=takimlar[konum];
				takimlar[konum]=temp;
			}
	}	
}

int main()
{
	futbol_takimi takimlar[5];
	ifstream giris("giris.txt");
	string ad;
	int g,m,b,a,y;
	for(int i=0;i<5;i++)
	{
		giris>>ad>>g>>m>>b>>a>>y;
		takimlar[i].setle(ad,g,m,b,a,y);
		
	}
	sirala(takimlar,5);
	cout<<"Takim"<<endl<<"galip"<<endl<<"maglup"<<endl<<"berabaer"<<endl<<"attigi"<<endl<<"yedigi"<<endl<<"everaj"<<endl<<"puan"<<endl;
	for(int i=0;i<5;i++)
	{
		takimlar[i].yazdir();
		cin>>ad;
	}

	return 0;
	
}
