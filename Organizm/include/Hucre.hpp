/** 
* @file Hucre.hpp
* @description Hucrenin uzunluk bilgisi ve mutasyon icin fonksiyonu tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/



#ifndef Hucre_HPP
#define Hucre_HPP
#include <iostream>
using namespace std;

class Hucre
{
	private: 
		int dnaUzunluk;
		
	
	public:
	Hucre(int);
	
	void YariyaDusur();

	int GetUzunluk();
	
	

};

#endif