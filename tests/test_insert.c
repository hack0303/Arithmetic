#include "../include/all.h"
#include "../src/insert.c"

int *sortByUsingInsertSort(int *array, int len);
int main()
{
    printf("------\n");
    int len = 100;
    int *array = malloc(len * sizeof(int));
    for (int x = 0; x < len; x++)
    {
        array[x] = rand() % len;
    }
    printf("length:%d\n", len);
    for (int x = 0; x < len; x++)
    {
        printf("%d\n", array[x]);
    }
    // len=4;
    int *after_sorted = sortByUsingInsertSort(array, len);
    printf("%s", "---result---\n");
    for (int x = 0; x < len; x++)
    {
        printf("%d\n", after_sorted[x]);
    }
    free(after_sorted);
    free(array);
    printf("%s", "free memory\n");
    while (1)
        ;
    return 0;
}
