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

    *pb = (*pa)++;          // 이 부분 수정 시 주의

    printf("*pa : %d, *pb : %d\n", *pa, *pb);

    return 0;
}
