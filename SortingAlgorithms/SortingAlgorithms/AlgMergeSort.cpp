#include "StdAfx.h"
#include "AlgMergeSort.h"
#include <algorithm>

AlgMergeSort::AlgMergeSort(void)
{
}


AlgMergeSort::~AlgMergeSort(void)
{
}

/*	http://xoax.net/comp_sci/crs/algorithms/lessons/Lesson3/
	T(n) = 0(1), if n = 1
				 2T(n/2) + O(n), if n > 1

	Total running time:  O(nlogn)
	Total Space: O(n)

	Space: O(v) more space than other sorts
	Therefore, merge sort asymptotically beats insertion sort in the worst case.
	In practice, merge sort beats insertion sort for n > 30 or so.

	Conclusion:
		The simplest in fast algorithms
		Useful for sequent access memories (hard drives, ..)
		The main sorting algorithm for linked lists
		Merge sort is stable
*/
void AlgMergeSort::sort(int ara[], const int& size)
{
	int nComparision = 0;
	int* tara = new int[ size ];

	sort(ara, tara, 0, size-1, nComparision);

	cout<<"AlgMergeSort:: ArraySize : " << size << ", Number of compared pairs: " << nComparision << endl;
}

/*

*/
void AlgMergeSort::sort(int ara[], int tara[], const int& left, const int& right, int& nComparision)
{
	if(left >= right)
	{
		return;
	}
	
	int middle = (left+right)/2;
	
	int crntComparision = 0;
	sort(ara, tara, left, middle, crntComparision);
	nComparision+= crntComparision;

	crntComparision = 0;
	sort(ara, tara, middle+1, right, crntComparision);
	nComparision+= crntComparision;
	
	crntComparision = 0;
	merge(ara, tara, left, middle, right, crntComparision);
	nComparision+= crntComparision;
}

void AlgMergeSort::merge(int ara[], int tara[], const int& left, const int& middle, const int& right, int& nComparision)
{
	nComparision = 0;
	int i = left, j = middle+1, k = 0;
	while( (i <= middle) && (j <= right) )
	{
		if(ara[i] < ara[j])
		{
			tara[k++] = ara[i++];
		}
		else
		{
			tara[k++] = ara[j++];
		}
		nComparision++;
	}

	while( i <= middle )
	{
		tara[k++] = ara[i++];
	}
	while( j <= right )
	{
		tara[k++] = ara[j++];
	}

	k = 0;
	for(int m = left; m <= right; m++)
	{
		ara[m] = tara[k++];
	}
}