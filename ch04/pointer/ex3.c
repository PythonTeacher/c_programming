#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    int *pa = &a;
    int *pb = &b;

    printf("%d + %d = %d\n", *pa, *pb, *pa + *pb);
    printf("%d - %d = %d\n", *pa, *pb, *pa - *pb);
    printf("%d * %d = %d\n", *pa, *pb, *pa * *pb);
    printf("%d / %d = %d\n", *pa, *pb, *pa / *pb);

    *pb = (*pa)++;          // �� �κ� ���� �� ����

    printf("*pa : %d, *pb : %d\n", *pa, *pb);

    return 0;
}
