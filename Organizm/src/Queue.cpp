/** 
* @file Queue.cpp
* @description Radixsort sinifi icin kullanilacak kuyruk yapisi
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/


#include "Queue.hpp"



	void Queue::reserve(int newCapacity)
	{
		int *tmp=new int[newCapacity];
		for(int j=0, i=front;j<lenght;j++)
		{
			
			tmp[j]=items[i];
			i=(i+1)%capacity;
		}
		capacity=newCapacity;
		delete []items;
	}
	
	Queue::Queue()
	{
		front=0;
		back=-1;
		capacity=100;
		lenght=0;
		items=new int[capacity];	
	}
	
	void Queue::clear()
	{
		front=0;
		back=-1;
		lenght=0;
		
	}
	int Queue::count()const
	{
		return lenght;
		
		
		
	}
	
	bool Queue::isEmpty()const
	{
		
		return lenght==0;
		
	}
	const int& Queue::peek()
	{
		if(isEmpty()) throw "queue is empty";
		return items[front];
		
	}
	void Queue::enqueue( int item)
	{
		if(lenght==capacity) reserve(2*capacity);
		back=(back+1)%capacity;
		items[back]=item;
		lenght++;
		
	}
	void Queue::dequeue()
	{
		
		if(isEmpty()) throw "queue is empty";
		front=(front+1)%capacity;
		lenght--;
		
	}
	
	Queue::~Queue()
	{
		delete [] items;
		
		
	}
	