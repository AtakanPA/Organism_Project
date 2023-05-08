/** 
* @file Node.hpp
* @description Arama agaci icin doku adreslerini tutan dugum
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/


#ifndef Node_HPP
#define Node_HPP
# include <iostream>
#include <cmath>
#include "Doku.hpp"
#include <cstddef>
using namespace std;


class Node
{
	
	public:
	
	 Doku* data;
	Node* left;
	Node* right;
    Node( Doku*,Node *,Node*);


};

#endif