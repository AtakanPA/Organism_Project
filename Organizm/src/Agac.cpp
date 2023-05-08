/** 
* @file Doku.hpp
* @description Dokunun icerisinde arraylist ile hucreler tutulur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/



#include "Agac.hpp"


	
		void Agac::SearchAndAdd( Node *&subNode, Doku* item)
		{
			 	if(subNode==NULL) subNode=new Node(item,NULL,NULL);
				else if(item->GetMiddleElement()<subNode->data->GetMiddleElement())
				{	SearchAndAdd(subNode->left,item); 
					
					if(Height(subNode->left)==Height(subNode->right)+1)
					{
						dengeliMi=false;
						
						
					}
					else 
					{
						dengeliMi=true;
						
					}
				}
				else if(item->GetMiddleElement()>subNode->data->GetMiddleElement())
				{
					SearchAndAdd(subNode->right,item);
						if(Height(subNode->right)==Height(subNode->left)+1)
					{
						dengeliMi=false;
						
						
					}
					else 
					{
						dengeliMi=true;
						
					}
				}
				else return;
		}
			bool Agac::Search(Node *&subNode,const int& item)
		{
			 	if(subNode==NULL) return false;
				else if(item<subNode->data->GetMiddleElement())
					Search(subNode->left,item);
				else if(item>subNode->data->GetMiddleElement())
					Search(subNode->right,item);
				else return true; 
		}
		bool Agac::SearchAndDelete(Node *&subNode,const int& item)
		{
			if(subNode==NULL) return false;	
			if(subNode->data->GetMiddleElement()==item) return DeleteNode(subNode);
			else if(item<subNode->data->GetMiddleElement())
				return SearchAndDelete(subNode->left,item);
			else return SearchAndDelete(subNode->right,item);
		}
		bool Agac::DeleteNode(Node *&subNode)
		{
			Node *delNode=subNode;
			if(subNode->right==NULL) subNode=subNode->left;
			else if(subNode->left==NULL)subNode=subNode->right;
			else
			{
				delNode=subNode->left;
				Node *parent=subNode;
				while(delNode->right!=NULL)
				{
					parent=delNode;
					delNode=delNode->right;
					
				}
				subNode->data =delNode->data;
				if(parent=subNode) subNode->left=delNode->left;
				else parent->right=delNode->left;
			}
			delete delNode->data;
			delete delNode;
			return true;
		}
		
		int Agac::Height(Node *subNode)
		{
			if(subNode==NULL) return -1;
			return 1+max(Height(subNode->left),Height(subNode->right));
			
		}
		void Agac::inorder(Node *subNode)
		{
			if(subNode!=NULL)
			{
				inorder(subNode->left);
				cout<<subNode->data->GetMiddleElement()<<" ";
				inorder(subNode->right);
			}
		}
		void Agac::preorder(Node *subNode)
		{
			if(subNode!=NULL)
			{cout<<subNode->data->GetMiddleElement()<<" ";
				preorder(subNode->left);
				
				preorder(subNode->right);
			}
		}
		void Agac::postorder(Node *subNode)
		{
			if(subNode!=NULL)
			{
				postorder(subNode->left);
				postorder(subNode->right);
				cout<<subNode->data<<" ";
				
			}
		}
		
		void Agac::postordermutasyon(Node*subNode)
		{
			if(subNode!=NULL)
			{
				postordermutasyon(subNode->left);
				postordermutasyon(subNode->right);
				subNode->data->MutasyonaUgrat();
			}		
		}
		int Agac::postOrderAdresAktar(Node*subNode,Doku** Array,int index)
		{	
			
			 
			 if(subNode->left != NULL)
			index =  postOrderAdresAktar(subNode->left, Array, index);
			if(subNode->right != NULL)
			index =  postOrderAdresAktar(subNode->right, Array, index);
			Array[index++] = subNode->data;	
			return index;

		}
		Doku** Agac::sortedArray()
		{
		Doku** array = new Doku*[20];
		int index = 0;
		postOrderAdresAktar(root, array, index);
		return array;
		
		}
		void Agac::agacitemizleveekle()
		{		
				dokular=sortedArray();
				
			Clear();
				
				for(int i=0;i<20;i++)
				{	
        			SearchAndAdd(root,dokular[i]);
					
				}
				delete [] dokular;
		}
	Agac::Agac()
	{
		root=NULL;
		dengeliMi=true;
	
	}
		int Agac::ValueOfRoot()
		{
			
			return root->data->GetMiddleElement();
			
			
		}
	bool Agac::isEmpty()const
	{return root==NULL;}
	void Agac::Add( Doku* item)
	{
		SearchAndAdd(root,item);
		
	}
	void Agac::Delete (const int item)
	{
		if(SearchAndDelete(root,item)==false) throw "item not Found";		
	}
	bool Agac::search(const int& item)
	{
		return Search(root,item); 
		
		
	}
	void Agac::Mutasyon()
	{	
		postordermutasyon(root);
		
		
		agacitemizleveekle();
		
	}
	
	int Agac::Height()
	{return Height(root);}
	
	void Agac::Clear()
	{
		while(!isEmpty()) DeleteNode(root);
	}
	void Agac::inorder()
	{
		inorder(root);
	}
	void Agac::preorder()
	{
		preorder(root);
	}
	void Agac::postorder()
	{
		postorder(root);
	}
	
	Agac::~Agac()
	{
		
		Clear();
	}