/** 
* @file Sistemler.cpp
* @description Organ adresleri arraylistler yardimiyla tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/



#include "Sistemler.hpp"



	Sistemler::Sistemler()
	{
	
		
		capacity=100;
		lenght=0;
		items=new Organ*[capacity];	
	}
	void Sistemler::clear()
	{
		
		lenght=0;
		
	}
	int Sistemler::count()const
	{
		return lenght;
		
		
		
	}

	bool Sistemler::isEmpty()const
	{
		
		return lenght==0;
		
	}
		void Sistemler::add( Organ* item)
	{
		
		
		items[lenght]=item;
		lenght++;
		
	}
	void Sistemler::remove()
	{
		
		if(isEmpty()) throw "Sistem is empty";
		
		lenght--;
		
	}
	void Sistemler::yazdir()
	{
		for(int i=0;i<lenght;i++)
		{
			if(items[i]->Denge()==false)
				cout<<" ";
			else
			{cout<<'#';		}
			
			
		}

	}
	ostream& operator<<(ostream& screen,Sistemler& right)
	{	
		
		
		
	}
	void Sistemler::OrganMutasyon()
	{
		for(int i=0;i<lenght;i++)
		{
			items[i]->MutasyonYonelimi();
			
		}
	
	}
	Sistemler::~Sistemler()
	{	
		
		delete [] items;
		
	}