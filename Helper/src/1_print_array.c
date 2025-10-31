#include "MyLib.h"


void print_array(int *arr, size_t n, char *name)
{
    printf("Print %s array: ", name);
    for (size_t i = 0; i < n ; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}