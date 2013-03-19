#include "StdAfx.h"
#include "AlgSelectionSort.h"
#include <algorithm>


AlgSelectionSort::AlgSelectionSort(void)
{
}


AlgSelectionSort::~AlgSelectionSort(void)
{
}

void AlgSelectionSort::sort(int ara[], const int& size)
{
    int nComparision = 0;
    for (int i = 0; i < size-1; i++)
    {
        for(int j = i+1; j <= size-1; j++)
        {
            if( ara[j] < ara[i] )
            {
                std::swap(ara[j], ara[i]);
            }
            nComparision++;
        }
    }

    cout<<"AlgSelectionSort:: ArraySize : " << size << ", Number of compared pairs: " << nComparision << endl;
}
