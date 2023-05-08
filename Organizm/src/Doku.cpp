/** 
* @file Doku.cpp
* @description Dokunun icerisinde arraylist ile hucreler tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/




#include "Doku.hpp"



	Doku::Doku()
	{
	
		
		capacity=40;
		lenght=0;
		items=new Hucre*[capacity];	
	}
	void Doku::clear()
	{
		
		lenght=0;
		
	}
	int Doku::count()const
	{
		return lenght;
		
		
		
	}
	int Doku::GetMiddleElement()const
	{
		return items[((lenght/2))]->GetUzunluk();		
	}
	bool Doku::isEmpty()const
	{
		
		return lenght==0;
		
	}
		void Doku::add( Hucre* item)
	{
		
		
		items[lenght]=item;
		lenght++;
		
	}
	void Doku::remove()
	{
		
		if(isEmpty()) throw "Doku is empty";
		
		lenght--;
		
	}
	void Doku::MutasyonaUgrat()const
	{	
	
		for(int i=0;i<lenght;i++)
		{
			if(items[i]->GetUzunluk()%2==0)
			{
				items[i]->YariyaDusur();	
			}
		}
		Sort();
		
	}
	void Doku::Sort()const
	{
		int *hucreUzunluk=new int[lenght];
		for(int i=0;i<lenght;i++)
		{
			hucreUzunluk[i]=items[i]->GetUzunluk();
			
			
		}
		Radix* radix=new Radix(hucreUzunluk,lenght);
		int*siralim=radix->Sort();
		delete []items;
		
		for(int i=0;i<lenght;i++)
		{
			items[i]=(new Hucre(siralim[i]));
		}
		delete radix;
		delete []hucreUzunluk;
		delete[] siralim;
		
	}
	
	ostream& operator<<(ostream& screen,Doku& right)
	{
		for(int i=0;i<right.lenght;i++)
		{
			screen<<right.items[i]->GetUzunluk()<<" ";		
		}	
		screen<<"";
	}
	
	Doku::~Doku()
	{
		delete [] items;
		
	}