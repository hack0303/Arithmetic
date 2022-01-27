#include <stdio.h>
#include <stdlib.h>
//
int *sortByUsingInsertSort(int *array, int len)
{
    int *after_sorted = malloc(len * sizeof(int));
    for (int x = 0; x < len; x++)
    {
        int me = array[x];
        int change_start = 0;
        short need_move = 0;
        if (x == 0)
        {
            after_sorted[0] = me;
            continue;
        }
        for (int y = 0; y < x; y++)
        {
            if (after_sorted[y] >= me)
            {
                need_move = 1;
                change_start = y;
                break;
            }
        }
        if (!need_move)
        {
            after_sorted[x] = me;
            continue;
        }
        for (int z = x; z > change_start; z--)
        {
            after_sorted[z] = after_sorted[z - 1];
        }
        after_sorted[change_start] = me;
    }
    return after_sorted;
}
