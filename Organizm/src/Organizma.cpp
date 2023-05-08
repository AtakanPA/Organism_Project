/** 
* @file Organizme.cpp
* @description Sistemler arraylistler yardimiyla tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/





#include "Organizma.hpp"


void Organizma::reserve(int newCapacity)
	{
		Sistemler** tmo = new Sistemler*[newCapacity];
		for (int i = 0; i < lenght; i++) tmo[i] = items[i];
		delete[] items;
		items = tmo;
		capacity = newCapacity;
	}


	Organizma::Organizma()
	{
	
		
		capacity=100;
		lenght=0;
		items=new Sistemler*[capacity];	
	}
	void Organizma::clear()
	{
		
		lenght=0;
		
	}
	int Organizma::count()const
	{
		return lenght;
		
		
		
	}

	bool Organizma::isEmpty()const
	{
		
		return lenght==0;
		
	}
		void Organizma::add( Sistemler* item)
	{
		
		if (lenght == capacity) reserve(2*capacity);
		items[lenght] = item;
		lenght++;
		
	}
	void Organizma::remove()
	{
		
		if(isEmpty()) throw "Sistem is empty";
		
		lenght--;
		
	}
	void Organizma::SistemMutasyon()
	{
		for(int i=0;i<lenght;i++)
		{
			items[i]->OrganMutasyon();
		}
		
	}
	void Organizma::sistemyazdir()
	{
		
		for(int i=0;i<lenght;i++)
		{		
			items[i]->yazdir();
			cout<<endl;		
		}
		
	}
	ostream& operator<<(ostream& screen,Organizma& right)
	{
			for(int i=0;i<right.lenght;i++)
		{
			screen<<right.items[i]<<" ";		
		}	
		screen<<"";
		
	}
	
	Organizma::~Organizma()
	{
		delete [] items;
		
	}