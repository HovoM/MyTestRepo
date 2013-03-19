// SortingAlgorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AlgSelectionSort.h"
#include "AlgBubbleSort.h"
#include "AlgBubbleSort2.h"
#include "AlgInsertionSort.h"
#include "AlgShellSort.h"
#include "AlgMergeSort.h"
#include "AlgHeapSort.h"
#include "AlgQuickSort.h"


/*	==== Data Structures-Sorting algorithms.pdf ====
*/
int _tmain(int argc, _TCHAR* argv[])
{
	//int ara[] = {44, 33, 15, 17, 88, 91, 39, 64, 5, 121, 4, 100, 1};
	//int ara[] = {44, 7, 15, 25};
	//int ara[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
	//int ara[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	int ara[] = {4, 8, 6, 3, 5, 1, 7, 2};
	
	AlgSelectionSort ss;
    AlgBubbleSort bs;
    AlgBubbleSort2 bs2;
	AlgInsertionSort is;
	AlgShellSort sls;
	AlgMergeSort ms;
	AlgHeapSort hs;
	AlgQuickSort qs;

    //ss.sort(ara, sizeof(ara)/sizeof(int));
    //bs.sort(ara, sizeof(ara)/sizeof(int));
    //bs2.sort(ara, sizeof(ara)/sizeof(int));
	//is.sort(ara, sizeof(ara)/sizeof(int));
	//sls.sort(ara, sizeof(ara)/sizeof(int));
	//ms.sort(ara, sizeof(ara)/sizeof(int));
	//hs.sort(ara, sizeof(ara)/sizeof(int));
	qs.sort(ara, sizeof(ara)/sizeof(int));

	return 0;
}
