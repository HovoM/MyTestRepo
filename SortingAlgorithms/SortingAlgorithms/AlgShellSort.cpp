#include "StdAfx.h"
#include "AlgShellSort.h"
#include <algorithm>


AlgShellSort::AlgShellSort(void)
{
}


AlgShellSort::~AlgShellSort(void)
{
}

/* Just like ordinary insertion sort, only the numbers are spaced 1 apart (can think of this as a 1-sort)
   Suppose, after doing the 5-sort, we do a 1-sort?
   In general, we would expect that each insertion would involve moving fewer numbers out of the way.

   No one knows the optimal sequence of diminishing gaps.
   This sequence is attributed to Donald E. Knuth:
   - Start with h = 1
   - Repeatedly compute h = 3*h + 1  (1, 4, 13, 40, 121, 364, 1093)
   - Stop when h is larger than the size of the array and use as the first gap
   - To get successive gap sizes, apply the inverse formula:   h = (h – 1) / 3

   Analysis
   - You cut the size of the array by some fixed amount, n, each time
   - Consequently, you have about log n stages
   - Each stage takes O(n) time -> algorithm takes O(n log n) time
   - if we just cut the array size in half each time, sometimes we get O(n2) behavior!

   - So what is the real running time of shellsort? Nobody knows!
   - Experiments suggest something like O(n3/2) or O(n7/6)
*/
void AlgShellSort::sort(int ara[], const int& size)
{
	int h = 1;
	while( h < size )
	{
		h = 3*h + 1;
	}

	int crntComparision = 0;
	int nComparision = 0;
	while( h > 1)
	{
		h = (h-1)/3;
		sort(ara, size, h, crntComparision);
		nComparision += crntComparision;
	}
	cout<<"AlgShellSort:: ArraySize : " << size << ", Number of compared pairs: " << nComparision << endl;
}

/*

*/
void AlgShellSort::sort(int ara[], const int& size, const int& gap, int& nComparision)
{
	int key;
    for (int i = gap; i < size; i+=gap)
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
}