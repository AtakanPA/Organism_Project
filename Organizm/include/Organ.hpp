/** 
* @file Organ.hpp
* @description Bir aramaagacinin adresini tutar ve mutasyona uygunluk kontrol edilir
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/


#ifndef Organ_HPP
#define Organ_HPP
#include "Agac.hpp"
#include "Doku.hpp"
class Organ 
{	
	private:
	Agac* aramaAgac;
	
	
	public:
	Organ();
	
	
	
	const void AddDoku( Doku* );
	bool Denge();
	void MutasyonYonelimi();

	
	friend ostream& operator<<(ostream& ,Organ& );
	~Organ();
	
};
#endif