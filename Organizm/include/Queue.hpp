/** 
* @file Queue.hpp
* @description Radixsort sinifi icin kullanilacak kuyruk yapisi
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/

#ifndef Queue_HPP
#define Queue_HPP

#include "Hucre.hpp"

class Queue
{

private:

	int front;
	int back;
	int capacity;
	int lenght;
	int* items;
	
	void reserve(int );

	
public:
	Queue();
	
	
	void clear();
	
	int count()const;
	
	bool isEmpty()const;
	
	const int& peek();

	void enqueue( int );
	
	void dequeue();
	
	~Queue();
	
	
};
#endif