#include "StdAfx.h"
#include "AlgBubbleSort2.h"
#include <algorithm>

AlgBubbleSort2::AlgBubbleSort2(void)
{
}


AlgBubbleSort2::~AlgBubbleSort2(void)
{
}
/* What if the collection was already sorted?
   What if only a few elements were out of place and after a couple of "bubble ups," the collection was sorted?

   We want to be able to detect this and "stop early"!

   We can use a boolean variable to determine if any swapping occurred during the "bubble up."

   If no swapping occurred, then we know that the collection is already sorted!
   This boolean "flag" needs to be reset after each "bubble up."
   
   
   One traversal = move the maximum element at the end
   Traversal #i : n – i + 1 operations
   Running time: (n – 1) + (n – 2) + … + 1 = (n – 1) n /2 = O(n2)
*/
void AlgBubbleSort2::sort(int ara[], const int& size)
{
    int nComparision = 0;
    for (int i = 0; i < size-1; i++)
    {
        bool did_swap = false;
        for(int j = 0; j < size-i-1; j++)
        {
            if( ara[j] > ara[j+1] )
            {
                std::swap(ara[j], ara[j+1]);
                did_swap = true;
            }
            nComparision++;
        }
        if(!did_swap) // no need to continue, array is already sorted
        {
            break;
        }
    }
    cout<<"AlgBubbleSort2:: ArraySize : " << size << ", Number of compared pairs: " << nComparision << endl;
}
