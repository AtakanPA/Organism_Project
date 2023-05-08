/** 
* @file Agac.hpp
* @description Agac hucreleri icerisinde dokularin adresleri tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/





#ifndef Agac_HPP
#define Agac_HPP
#include "Node.hpp"
#include "Doku.hpp"
class Agac
{
	
	private:
		Node * root;
		Doku** dokular;
		void SearchAndAdd( Node *&, Doku* );
	
		bool Search(Node *&,const int& );
	
		bool SearchAndDelete(Node *&,const int& );
		
		bool DeleteNode(Node *&);
		
		int Height(Node *sunNode);
	
		void inorder(Node *subNode);
	
		void preorder(Node *);
		
		void postorder(Node *);
		void postordermutasyon(Node*);
		Doku** sortedArray();
	int postOrderAdresAktar( Node*,Doku**,int);
	void agacitemizleveekle();
	public:
	Agac();
	bool dengeliMi;

	bool isEmpty()const;
	
	void Add( Doku*);
	int ValueOfRoot();
	void Mutasyon();
	
	void Delete (const int);

	bool search(const int& );
	
	
	int Height();
	
	
	void Clear();
	
	void inorder();

	void preorder();
	
	void postorder();
	
	
	~Agac();

};
#endif