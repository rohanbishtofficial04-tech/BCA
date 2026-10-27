#include <stdio.h>
int main()
{
    int a = 5;
    int *a1 = &a;        // referencing
    printf("\n%p", a1);  // address of a
    printf("\n%d", *a1); // dereferencing
    printf("\n%p", &a1); // reference address
    return 0;
}