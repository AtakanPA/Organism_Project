 /** 
* @file Main.cpp
* @description Kontrol sınıfı cagirilir ve canli olusurulur.
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "Kontrol.hpp"
using namespace std;





int main()
{	
	
	Kontrol* kontrol=new Kontrol;
	kontrol->Canli();
	delete kontrol;
}
