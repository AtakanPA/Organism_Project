/** 
* @file Doku.hpp
* @description Dokunun icerisinde arraylist ile hucreler tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/


#ifndef Doku_HPP
#define Doku_HPP
#include "Hucre.hpp"
#include "Radix.hpp"
class Doku
{
	private:
	
		Hucre** items;
		int capacity;
		int lenght;
		
	
	
	public:
	Doku();
	
	
	void clear();
	
	int count()const;

	int GetMiddleElement()const;
	bool isEmpty()const;
	void MutasyonaUgrat()const;
	void add( Hucre*);
	void Sort()const;
	void remove();
	
	
	~Doku();
	
	friend ostream& operator<<(ostream&,Doku& );
	
	
	
	
	
};
#endif