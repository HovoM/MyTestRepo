#pragma once

#include "Sort.h"

/* Idea: Divide into two halves
         Recursively sort each
		 merge two sorted halves

*/

class AlgMergeSort : public Sort
{
public:
	AlgMergeSort(void);
	~AlgMergeSort(void);

	virtual void sort(int[], const int& size);
	
	void sort(int[], int[], const int& left, const int& right, int& nComparision);
	void merge(int[], int[], const int& left, const int& middle, const int& right, int& nComparision);
};
