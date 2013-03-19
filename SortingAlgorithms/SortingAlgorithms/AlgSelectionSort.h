#pragma once

#include "Sort.h"

/* Find the smallest in the array and exchange it with the element in
   the first position, then find the second smallest element and exchange
   it with the element in the second position, and continue in this way
   until the entire array is sorted.

   Good algorithm to sort a small number of elements

   O(n2)

*/
class AlgSelectionSort : public Sort
{
public:
    AlgSelectionSort(void);
    ~AlgSelectionSort(void);

    virtual void sort(int[], const int& size);
};

