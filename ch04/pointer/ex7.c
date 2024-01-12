#include <stdio.h>

int main()
{
    int a = 2, b = 3;
    int *pa = &a, *pb = &b;

    printf("pa : %p, pb : %p\n", pa, pb);
    //printf("pa + pb	= %d\n", pa + pb);
    printf("pa - pb	= %d\n", pa - pb);
    //printf("pa * pb	= %d\n", pa * pb);
    //printf("pa / pb	= %d\n", pa / pb);

    return 0;
}
