#include <stdio.h>

int main()
{
    int i = 10;
    double d = 3.14;
    char c = 'A';

    int *pi = &i;
    double *pd = &d;
    char *pc = &c;

    int **ppi = &pi;    // 이중포인터변수 = 포인터변수의 포인터 (이중포인터)
    double **ppd = &pd;
    char **ppc = &pc;

    puts("기본자료형 이용\t포인터변수 이용\t이중포인터변수 이용");
    printf("%d \t %d \t %d\n", i, *pi, **ppi);
    printf("%.2f \t %.2f \t %.2f\n", d, *pd, **ppd);
    printf("%c \t %c \t %c\n", c, *pc, **ppc);

    return 0;
}
