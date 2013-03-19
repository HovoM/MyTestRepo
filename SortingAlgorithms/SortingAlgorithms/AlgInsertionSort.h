#pragma once

#include "Sort.h"

/* Idea: like sorting a hand of playing cards
- Start with an empty left hand and the cards facing down on the table.
- Remove one card at a time from the table, and insert it into the correct position in the left hand
  * compare it with each of the cards already in the hand, from right to left
- The cards held in the left hand are sorted
  * these cards were originally the top cards of the pile on the table
*/
class AlgInsertionSort : public Sort
{
public:
	AlgInsertionSort(void);
	~AlgInsertionSort(void);

	virtual void sort(int[], const int& size);
};

