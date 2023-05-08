/** 
* @file Hucre.cpp
* @description Hucre eger mutasyon icin uygunsa YariyaDusur Fonksionu uygulanır
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/




#include "Hucre.hpp"



Hucre::Hucre(int dnaUzunluk)
	{
		this->dnaUzunluk=dnaUzunluk;
		
		
	}
	
	int Hucre::GetUzunluk()
	{
		return dnaUzunluk;		
	}
	void Hucre::YariyaDusur()
	{
		
		dnaUzunluk=dnaUzunluk/2;
		
		
	}