#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a = 10, b = 5;

    printf("swapÀü a : %d, b : %d\n", a, b);

    swap(&a, &b);

    printf("swap ÈÄ a : %d, b : %d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
