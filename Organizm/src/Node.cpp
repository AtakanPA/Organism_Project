/** 
* @file Node.cpp
* @description Arama agaci icin doku adreslerini tutan dugum
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/

#include "Node.hpp"

Node::Node( Doku* dt,Node *lf=NULL,Node* right=NULL)
{
	this->data=dt;
	this->left=lf;
	this->right=right;
	
}