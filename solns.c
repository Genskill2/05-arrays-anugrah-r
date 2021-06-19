/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int n)
{
    int maxn = 0;
    for(int i = 0; i<n; i++)
    {
        if (a[i] > maxn)
            maxn = a[i];
    }
    return maxn;
}


