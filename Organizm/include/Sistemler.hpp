/** 
* @file Sistemler.hpp
* @description Organ adresleri arraylistler yardimiyla tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/


#ifndef Sistemler_HPP
#define Sistemler_HPP
#include "Organ.hpp"
class Sistemler
{
		private:
	
		Organ** items;
		int capacity;
		int lenght;
		
	
	
	public:
	Sistemler();
	
	
	void clear();
	
	int count()const;

	void yazdir();
	bool isEmpty()const;
	
	void add( Organ*);
	
	void remove();
	void OrganMutasyon();
	
	~Sistemler();
	
	friend ostream& operator<<(ostream&,Sistemler& );
	
	
	
	

};
#endif