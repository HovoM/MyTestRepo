#include "StdAfx.h"
#include "AlgInsertionSort.h"
#include <algorithm>

AlgInsertionSort::AlgInsertionSort(void)
{
}


AlgInsertionSort::~AlgInsertionSort(void)
{
}
/* Insertion sort – sorts the elements in place
   Invariant: at the start of the for loop the elements in A[1 . . j-1] are in sorted order

   Cases:	1) The array is already sorted    O(n)
			2) The array is in reverse sorted order   O(n2)

	
	Advantages:
		Simple implementation
		Eficient for small data sets
		Good running time for "almost sorted"m arrays O(n)
		Stable: Does not change the relative order of elements with equal keys
		In place: only requires constant amount O(1) of additional memory

	Disadvantages:
		O(n2) running time in worst and avarage case
		n2/2 = comparisions and exchange
*/
void AlgInsertionSort::sort(int ara[], const int& size)
{
	int key;
    int nComparision = 0;
    for (int i = 1; i < size; i++)
    {
		key = ara[i];

		int j = i - 1;
		while ( (j >= 0) && (ara[j] > key) )
        {
            ara[j+1] = ara[j];
			j--;
			nComparision++;
        }

		ara[j+1] = key;
    }
    cout<<"AlgInsertionSort:: ArraySize : " << size << ", Number of compared pairs: " << nComparision << endl;
}
