#include <stdio.h>

int main()
{
    int i = 10;
    double d = 3.14;
    char c = 'A';

    int *pi = &i;
    double *pd = &d;
    char *pc = &c;

    int **ppi = &pi;    // ���������ͺ��� = �����ͺ����� ������ (����������)
    double **ppd = &pd;
    char **ppc = &pc;

    puts("�⺻�ڷ��� �̿�\t�����ͺ��� �̿�\t���������ͺ��� �̿�");
    printf("%d \t %d \t %d\n", i, *pi, **ppi);
    printf("%.2f \t %.2f \t %.2f\n", d, *pd, **ppd);
    printf("%c \t %c \t %c\n", c, *pc, **ppc);

    return 0;
}
