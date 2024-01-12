#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    int *temp;

    int *pa = &a;
    int *pb = &b;

    printf("swap전 a : %d, b : %d\n", *pa, *pb);

    // 첫번째 방식 (a, b를 swap)
    /*temp = *pa;
    *pa = *pb;
    *pb = temp;*/

    // 두번째 방식 (pa, pb를 swap)
    temp = pa;
    pa = pb;
    pb = temp;

    printf("swap 후 a : %d, b : %d\n", a, b);
    printf("swap 후 a : %d, b : %d\n", *pa, *pb);

    return 0;
}
