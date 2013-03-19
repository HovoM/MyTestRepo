#pragma once

#include "Sort.h"

/* Idea: With insertion sort, each time we insert an element, other elements get nudged one step
		closer to where they ought to be
		
		What if we could move elements a much longer distance each time?
		We could move each element:
			A long distance
			A somewhat shorter distance
			A shorter distance still

		This approach is what makes shellsort so much faster than insertion sort
*/

class AlgShellSort  : public Sort
{
public:
	AlgShellSort(void);
	~AlgShellSort(void);

	virtual void sort(int[], const int& size);
	void sort(int[], const int& size, const int& step, int& nComparision);
};

