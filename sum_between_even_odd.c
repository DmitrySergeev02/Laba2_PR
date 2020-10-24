#include "sum_between_even_odd.h"
#include "index_first_even.h"
#include "index_last_odd.h"
int sum_between_even_odd(int A[], int b)
{
    int f, l, summ = 0;
    f = index_first_even(A, b);
    l = index_last_odd(A, b);
    int i;
    for (i = f; i < l; i++)
    {
        if (A[i]>=0)
        {
            summ = summ +A[i];
        }
        else
        {
            summ = summ - A[i];
        }
        
    }
    return (summ);
}

