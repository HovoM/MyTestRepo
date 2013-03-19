#pragma once

#include "Sort.h"

/*	Another divide-and-conquer algorithm
	Idea: Partition set into two using randomly chosen pivot
    - sort the first half
    - sort the second half
*/
class AlgQuickSort : public Sort
{
public:
	AlgQuickSort(void);
	~AlgQuickSort(void);

	virtual void sort(int[], const int& size);

private:
	void qSort(int[], const int, const int size, int&);

	int partition(int[], const int, const int, int&);

};

