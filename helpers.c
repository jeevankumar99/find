// Helper functions

#include <cs50.h>
#include <stdio.h>

#include "helpers.h"  // to pass on these functions to the program find

// Returns true if value is in array of n values, else false
bool search(int value, int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (value == values[i])
        {
            return true;
            break; // to stop the loop
        }
    }
    return false;
}

// Sorts array of n values
void sort(int values[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)  // this is insertion sort
    {
        key = values[i];
        j = i - 1;
        while (j >= 0 && values[j] > key)
        {
            values[j + 1] = values[j];
            j = j - 1;
        }
        values[j + 1] = key;
    }
}
