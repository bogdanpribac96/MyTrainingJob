#include "MyLib.h"

size_t my_strlen(const char *s)
{
    const char *p = s;
    while (*p)
    {
        ++p;
    }
    return (size_t)(p - s);
}

void reverse_array(int *arr, size_t n)
{
    for (size_t i = 0; i < n / 2; ++i)
    {
        int tmp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = tmp;
    }
}
