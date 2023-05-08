/** 
* @file Organizme.hpp
* @description Sistemler arraylistler yardimiyla tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/



#ifndef Organizma_HPP
#define Organizma_HPP
#include "Sistemler.hpp"

class Organizma
{
	private:
	
		Sistemler** items;
		int capacity;
		int lenght;
		void reserve(int);
	
	
	public:
	Organizma();
	
	
	void clear();
	
	int count()const;

	
	bool isEmpty()const;
	
	void add( Sistemler*);
	
	void remove();
	void SistemMutasyon();
	void sistemyazdir();
	~Organizma();
	
	friend ostream& operator<<(ostream&,Organizma& );
	
	
	
	
};
#endif