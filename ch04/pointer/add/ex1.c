#include <stdio.h>

void input(int *pa, int *pb);
void divide(int a, int b, int *pq, int *pr);
void output(int quotient, int remainder);

int main()
{
    int a, b;
    int quotient, remainder;

    input(&a, &b);
    divide(a, b, &quotient, &remainder);
    output(quotient, remainder);

    return 0;
}

void input(int *pa, int *pb)
{
    printf("�� �� ���� �Է� => ");
    scanf("%d %d", pa, pb);
}

void divide(int a, int b, int *pq, int *pr)
{
    *pq = a / b;
    *pr = a % b;
}

void output(int quotient, int remainder)
{
    printf("�� ���� �� : %d, ������ : %d\n", quotient, remainder);
}
