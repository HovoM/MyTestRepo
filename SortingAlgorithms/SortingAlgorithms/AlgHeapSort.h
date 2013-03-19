#pragma once

#include "Sort.h"

/* Idea: 
	What is the advantage of merge sort?
	- Answer: O(n lg n) worst-case running time

	What is the advantage of insertion sort?
	- Answer: sorts in place
	- When array “nearly sorted”, runs fast in practice

	Heapsort: Combines advantages of both previous algorithms
*/

class AlgHeapSort : public Sort
{
public:
	AlgHeapSort(void);
	~AlgHeapSort(void);

	virtual void sort(int[], const int& size);

	// maintain the heap property
	void Heapify(int[], const int, const int);
	void siftDown( int ara[], int start, int end);

	void Heapsort( int ara[], int count);
	void HeapsortSTL(int ara[], const int& size); // stl olution

};

