#include <stdio.h>
#include <stdint.h>

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

void print_array(int *arr, size_t n, char *name)
{
    printf("Print %s array: ", name);
    for (size_t i = 0; i < n ; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int a[5] = {1,2,3,4,5};
    printf("Test my strlen function: ECU have lenght of %d\n",(int)my_strlen("ECU"));
    print_array(a,5,"before");
    reverse_array(a, 5);
    print_array(a,5,"after");
    //test git with vs code

    return 0;
}