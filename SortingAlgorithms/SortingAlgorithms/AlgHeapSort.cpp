#include "StdAfx.h"
#include "AlgHeapSort.h"
#include <algorithm>

AlgHeapSort::AlgHeapSort(void)
{
}


AlgHeapSort::~AlgHeapSort(void)
{
}

/* http://xoax.net/comp_sci/crs/algorithms/lessons/Lesson10/
	A heap can be seen as a complete binary tree:
   - All levels are complete except the lowest one
   - In the last level empty spaces are towards the right

   In practice, heaps are usually implemented as arrays:

   A = [16 14 10 8 7 9 3 2 4 1]
   To represent a complete binary tree as an array:
   - The root node is A[1]
   - Node i is A[i]
   - The parent of node i is A[i/2] (note: integer divide)
   - The left child of node i is A[2i]
   - The right child of node i is A[2i + 1]

	Heaps satisfy the heap property:  A[Parent(i)] >= A[i] for all nodes i > 1
	Namily: the value of a node is at most the value of its parent

	Definitions:
	- The height of a node in the tree = the number of edges on the longest downward path to a leaf
	- The height of a tree = the height of its root

	So, basic heap operations take at most time proportional to the height of the heap

*/

void AlgHeapSort::sort(int ara[], const int& size)
{
	int nComparision = 0;

	Heapsort(ara, size);
	//HeapsortSTL(ara, size);

	cout<<"AlgHeapSort:: ArraySize : " << size << ", Number of compared pairs: " << nComparision << endl;
}

/*
	"siftDown" version of heapify has O(n) time complexity, while the "siftUp" version given below has O(n log n)
	time complexity due to its equivalence with inserting each element, one at a time, into an empty heap.
	This may seem counter-intuitive since, at a glance, it is apparent that the former only makes half as many calls
	to its logarithmic-time sifting function as the latter; i.e., they seem to differ only by a constant factor,
	which never has an impact on asymptotic analysis.
*/
void AlgHeapSort::siftDown(int ara[], int start, int end)
{
    int root = start;
 
    while ( root*2+1 < end )
	{
        int child = 2*root + 1;
        if( (child + 1 < end) && (ara[child] < ara[child+1]) )
		{
            child += 1;
        }
        if( ara[root] < ara[child] )
		{
            std::swap( ara[child], ara[root] );
            root = child;
        }
        else {
            return;
		}
    }
}

void AlgHeapSort::Heapsort( int ara[], int count)
{
    int start, end;
 
    /* heapify */
    //for (start = 2; start >=0; start--)
	for (start = (count-2)/2; start >=0; start--)
	{
        siftDown( ara, start, count);
    }
 
    for (end=count-1; end > 0; end--)
	{
        std::swap(ara[end], ara[0]);
        siftDown(ara, 0, end);
    }
}

void AlgHeapSort::HeapsortSTL(int ara[], const int& size)
{
    std::make_heap(ara, ara + size);
    std::sort_heap(ara, ara + size);
}

