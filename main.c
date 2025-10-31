#include <helper.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
    printf("Test my strlen function: ECU have lenght of %d\n",(int)my_strlen("ECU"));
    print_array(a,5,"before");
    reverse_array(a, 5);
    print_array(a,5,"after");
   

    return 0;
}