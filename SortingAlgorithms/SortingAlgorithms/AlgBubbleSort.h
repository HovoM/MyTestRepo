#pragma once

#include "Sort.h"

/*  Move from the front to the end
    �Bubble� the largest value to the end using pair-wise comparisons and swapping

    Notice that only the largest value is correctly placed, All other values are still out of order,
    So we need to repeat this process
*/

class AlgBubbleSort : public Sort
{
public:
    AlgBubbleSort(void);
    ~AlgBubbleSort(void);

    virtual void sort(int[], const int& size);
};

