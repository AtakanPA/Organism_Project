/** 
* @file Kontrol.cpp
* @description Dosya okuma işlemleri ve mutasyon işlemleri.
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/



#include "Kontrol.hpp"


Kontrol::Kontrol()
{
	countline=0;
	
	
	
}



void Kontrol::dosyaoku()
{ifstream dosya("veri.txt");
	if(dosya.is_open())
	{
		while(getline(dosya,tmp))
		{			
		countline++;					
		}		
	}
			dosya.close();
						
			ifstream dosyam("veri.txt");
	 dokular=new Doku[countline];
  
	if(dosyam.is_open())
	{
		count=0;
		
			while(getline(dosyam,veri))						
			{	stringstream sstream;
				sstream<<veri;
				satirEleman=0;
				//cout<<veri;
				if(veri!="")
				{				
			int *Elemandizi=new int[40];
			
				while(sstream>>sayim)
				{				
					Elemandizi[satirEleman]=sayim;
					satirEleman++;
				}			
				Radix *radix=new Radix(Elemandizi,satirEleman);
				int *siralim=radix->Sort();
				delete radix;		
				delete []Elemandizi;			
				for(int i=0;i<satirEleman;i++)
				{				
					dokular[count].add(new Hucre(siralim[i]));				
				}			
				delete []siralim;
				count++;
				}
			}			
	}	
	dosya.close();
	
	
	
	
}
void Kontrol::OrganOlustur()
{
	 sayiorgan=((countline/20));
			 organlar=new Organ[sayiorgan];
		for(int j=0;j<sayiorgan;j++)
		{
			for(int i=0;i<20;i++)
			{ 
				if((j*20)+i<countline)
				organlar[j].AddDoku((&dokular[(j*20)+i]));		
			}
		}	
}
void Kontrol::SistemOlustur()
{
	 sistemler=new Sistemler[(sayiorgan/100)];
			for(int j=0;j<(sayiorgan/100);j++)
		{
			for(int i=0;i<100;i++)
			{ 
				if((j*100)+i<countline)
				sistemler[j].add((&organlar[(j*100)+i]));			
			}
		}		

}
void Kontrol::OrganizmaOlustur()
{
	organizmam=new Organizma();
		for(int i=0;i<(sayiorgan/100);i++)
		{		
			organizmam->add(&sistemler[i]);		
		}	
	
	
}
void Kontrol::Yazdir()
{
	bool mutasyon;
	while(true)
		{
			system("cls");
			string ch;
			if(mutasyon==false)
			cout<<"                        ORGANIZMA"<<endl;
			else
				cout<<"                        ORGANIZMA (MUTASYONA UGRADI)"<<endl;
		organizmam->sistemyazdir();
		getline(cin,ch);
		if(ch==""){
		mutasyon=true;
		organizmam->SistemMutasyon();}
		else if(ch=="e")
			exit(0);
		else
		{
			cout<<"Lutfen Dogru Tus Giriniz"<<endl;
		}
		}
	

	
	
}

void Kontrol::Canli()
{
	
	dosyaoku();
	OrganOlustur();
	SistemOlustur();
	OrganizmaOlustur();
	Yazdir();
	
	delete organizmam;
	
}

Kontrol::~Kontrol()
{
	delete organizmam;
}