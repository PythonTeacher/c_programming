#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    int *temp;

    int *pa = &a;
    int *pb = &b;

    printf("swap�� a : %d, b : %d\n", *pa, *pb);

    // ù��° ��� (a, b�� swap)
    /*temp = *pa;
    *pa = *pb;
    *pb = temp;*/

    // �ι�° ��� (pa, pb�� swap)
    temp = pa;
    pa = pb;
    pb = temp;

    printf("swap �� a : %d, b : %d\n", a, b);
    printf("swap �� a : %d, b : %d\n", *pa, *pb);

    return 0;
}
