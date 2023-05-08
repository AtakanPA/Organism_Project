/** 
* @file Radix.hpp
* @description Hucrelerin siralanmasi icin gereken radixsort sinifi
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 2.Ödev
* @date 11.12.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/


#ifndef Radix_HPP
#define Radix_HPP

#include "Queue.hpp"
#include <cmath>

class Radix{
	private:	
		int* numbers;
		int length;
		Queue **queues;
		int maxStep;
		
		int MaxStepNumber();
		int StepCount(int);
		int* QueueCurrentLengths();
	public:
		Radix(int*, int);
		int* Sort();
		int power(int );
		~Radix();
};

#endif
