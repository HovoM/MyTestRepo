// combinations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int Enumerate5CardPermutationsWithRepetition(const int n = 52)
{
    int totalOutcomesEnumerated = 0;

    for (int card1 = 0; card1 < n; card1++)
    {
        for (int card2 = 0; card2 < n; card2++)
        {
            for (int card3 = 0; card3 < n; card3++)
            {
                for (int card4 = 0; card4 < n; card4++)
                {
                    for (int card5 = 0; card5 < n; card5++)
                    {
                        // Each iteration of this loop visits a single outcome
                        totalOutcomesEnumerated++;
                    }
                }
            }
        }
    }
	return totalOutcomesEnumerated;
}

int Enumerate5CardPermutationsWithoutRepetition(const int n = 52)
{
    int totalOutcomesEnumerated = 0;

    for (int card1 = 0; card1 < n; card1++)
    {
        for (int card2 = 0; card2 < n; card2++)
        {
            if (card2 == card1) continue;

            for (int card3 = 0; card3 < n; card3++)
            {
                if (card3 == card2 || card3 == card1) continue;

                for (int card4 = 0; card4 < n; card4++)
                {
                    if (card4 == card3 || card4 == card2 || card4 == card1) continue;

                    for (int card5 = 0; card5 < n; card5++)
                    {
                        if (card5 == card4 || card5 == card3 || card5 == card2 || card5 == card1) continue;

                        // Each iteration of this loop visits a single outcome
                        totalOutcomesEnumerated++;
                    }
                }
            }
        }
    }
	return totalOutcomesEnumerated;
} 

int Enumerate5CardCombinationsWithRepetition(const int n = 52)
{
    int totalOutcomesEnumerated = 0;

    for (int card1 = 0; card1 < n; card1++)
    {
        for (int card2 = card1; card2 < n; card2++)
        {
            for (int card3 = card2; card3 < n; card3++)
            {
                for (int card4 = card3; card4 < n; card4++)
                {
                    for (int card5 = card4; card5 < n; card5++)
                    {
                        // Each iteration of this loop visits a single outcome
                        totalOutcomesEnumerated++;
                    }
                }
            }
        }
    }
	return totalOutcomesEnumerated;
}

int Enumerate5CardCombinations(const int n = 52)
{
    int totalOutcomesEnumerated = 0;

    for (int card1 = 0; card1 < n-4; card1++)
    {
        for (int card2 = card1 + 1; card2 < n-3; card2++)
        {
            for (int card3 = card2 + 1; card3 < n-2; card3++)
            {
                for (int card4 = card3 + 1; card4 < n-1; card4++)
                {
                    for (int card5 = card4 + 1; card5 < n; card5++)
                    {
                        // Each iteration of this loop visits a single outcome
                        totalOutcomesEnumerated++;
                    }
                }
            }
        }
    }
	return totalOutcomesEnumerated;
} 

int _tmain(int argc, _TCHAR* argv[])
{
	int x = Enumerate5CardCombinations();

	return 0;
}

