/** 
* @file Organ.cpp
* @description Bir aramaagacinin adresini tutar ve mutasyona uygunluk kontrol edilir
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/


#include "Organ.hpp"



	
	
	
	Organ::Organ()
	{
		aramaAgac=new Agac();
	}
	
	
	const void Organ::AddDoku( Doku* item)
	{
			aramaAgac->Add(item);
	}
	bool Organ::Denge()
	{
		return aramaAgac->dengeliMi;
	}
	void Organ::MutasyonYonelimi()
	{
		if(aramaAgac->ValueOfRoot()%50==0)
		{
		aramaAgac->Mutasyon();
		}
		
	
	}
	ostream& operator<<(ostream& screen,Organ& right)
	{
	
		
			screen<<right.aramaAgac->Height();		
		
		screen<<"";
	}
	
	Organ::~Organ()
	{
		delete aramaAgac;
	}