#include <stdio.h>

int main()
{
    int a = 2, b = 3;
    int *pa = &a, *pb = &b;

    printf("pa : %p, pb : %p\n", pa, pb);
    printf("pa + 1	= %p\n", pa + 1);
    printf("pa - 1	= %p\n", pa - 1);
    //printf("pa * 1	= %d\n", pa * 1);
    //printf("pa / 1	= %d\n", pa / 1);
    printf("pa > pb	= %d\n", pa > pb);

    return 0;

}
