#include <stdio.h>

int main()
{
    char c='A';
    int i=10;
    double d=3.14;

    void *vp = NULL;        // void형 포인터 변수
    int *pi;

    puts("기본자료형 이용  void형 포인터변수 이용");

    vp = &c;
    printf("%c \t %c\n", c, *(char *)vp);

    vp = &i;
    pi = (int *)vp;
    printf("%d \t %d \t %d\n", i, *(int *)vp, *pi);

    vp = &d;
    printf("%.2f \t %.2f\n", d, *(double *)vp);

    return 0;
}
