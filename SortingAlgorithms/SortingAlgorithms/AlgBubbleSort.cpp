#include "StdAfx.h"
#include "AlgBubbleSort.h"
#include <algorithm>


AlgBubbleSort::AlgBubbleSort(void)
{
}


AlgBubbleSort::~AlgBubbleSort(void)
{
}

/* We have N elements. If each time we bubble an element, we place it in its correct location…
   Then we repeat the "bubble up" process N – 1 times
*/
void AlgBubbleSort::sort(int ara[], const int& size)
{
    int nComparision = 0;
    for (int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if( ara[j] > ara[j+1] )
            {
                std::swap(ara[j], ara[j+1]);
            }
            nComparision++;
        }
    }

    cout<<"AlgBubbleSort:: ArraySize : " << size << ", Number of compared pairs: " << nComparision << endl;
}
