/** 
* @file Kontrol.hpp
* @description  Dosya okuma işlemleri ve mutasyon işlemleri.
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/



#ifndef Kontrol_HPP
#define Kontrol_HPP
#include <fstream>
#include <string>
#include <sstream>
#include "Radix.hpp"
#include "Doku.hpp"
#include "Organ.hpp"
#include "Hucre.hpp"
#include "Agac.hpp"
#include "Queue.hpp"
#include "Sistemler.hpp"
#include "Organizma.hpp"
class Kontrol
{
	
private:
string tmp;
	string veri;
	int countline;
	Doku* dokular;
	Organ* organlar;
	Sistemler* sistemler;
	Organizma* organizmam;
	int sayiorgan;
	
	int satirEleman;
    int sayim;
    int count;
	int x;
	public:
	Kontrol();
	~Kontrol();
	void Canli();
	void Yazdir();
	void OrganizmaOlustur();
	void SistemOlustur();
	void OrganOlustur();
	void dosyaoku();
	
	
	
};
#endif