#include "StdAfx.h"
#include "AlgQuickSort.h"
#include <algorithm>

AlgQuickSort::AlgQuickSort(void)
{
}


AlgQuickSort::~AlgQuickSort(void)
{
}

/* The array A[p..r] is partitioned into two nonempty subarrays A[p..q] and A[q+1..r]
   (partitioned around pivot x such that element in lower subarray <= x >= elemets in upper subarray)
   - All elements in A[p..q] are less than all elements in A[q+1..r]
   - The subarrays are recursively sorted by calls to quicksort
   - Unlike merge sort, no combining step: two subarrays form an already-sorted array

   Worst-case running time on an array of n elements:
   - Input sorted or reverse sorted
   - One side of partition always has no elemets
   In the worst case: T(n) = T(0) + T(n - 1) + O(n) ~ O(n2)

   If we are lucky, PARTITION splits the array evenly: T(n) = 2T(n/2) + O(n) (same as merge sort) O(nlgn)

   Summary:
   - Most of the work done in partitioning
   - Average case takes O(nlog(n)) time
   - Worst case takes O(n2) time
   - Space (sorts in-place, i.e., does not require additional space)


   The real liability of quicksort is that it runs in O(n2) on already-sorted input
   Book discusses two solutions:
   - Randomize the input array
   - Pick a random pivot element
*/
void AlgQuickSort::sort(int ara[], const int& size)
{
	int nComparision = 0;

	qSort(ara, 0, size, nComparision);

	cout<<"AlgQuickSort:: ArraySize : " << size << ", Number of compared pairs: " << nComparision << endl;
}

void AlgQuickSort::qSort(int ara[], const int left, const int right, int& nComparision)
{
	if (left < right)
	{
		int tmp = 0;
		int pivot = partition(ara, left, right, tmp);
		nComparision += tmp;

		tmp = 0;
		qSort(ara, left, pivot, tmp);
		nComparision += tmp;

		tmp = 0;
		qSort(ara, pivot+1, right, tmp);
		nComparision += tmp;
	}
}

/*
In very early versions of quicksort, the leftmost element of the partition would often be chosen as the pivot element.
Unfortunately, this causes worst-case behavior on already sorted arrays. The problem was easily solved by choosing
either a random index for the pivot, choosing the middle index of the partition or choosing the median of the first,
middle and last element of the partition for the pivot.
*/
int AlgQuickSort::partition(int ara[], const int left, const int right, int& nComparision)
{
	int pivot = left;
	int pValue = ara[pivot];

	int tmp = 0;
	for(int j = left+1; j < right; j++)
	{
		if(ara[j] < pValue)
		{
			pivot++;
			std::swap(ara[pivot], ara[j]);
			tmp++;
		}
	}
	std::swap(ara[pivot], ara[left]);
	nComparision = ++tmp;

	return pivot;
}
