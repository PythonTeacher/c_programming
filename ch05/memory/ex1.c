#include <stdio.h>

int main()
{
    char c='A';
    int i=10;
    double d=3.14;

    void *vp = NULL;        // void�� ������ ����
    int *pi;

    puts("�⺻�ڷ��� �̿�  void�� �����ͺ��� �̿�");

    vp = &c;
    printf("%c \t %c\n", c, *(char *)vp);

    vp = &i;
    pi = (int *)vp;
    printf("%d \t %d \t %d\n", i, *(int *)vp, *pi);

    vp = &d;
    printf("%.2f \t %.2f\n", d, *(double *)vp);

    return 0;
}
