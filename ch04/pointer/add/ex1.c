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
    printf("두 개 정수 입력 => ");
    scanf("%d %d", pa, pb);
}

void divide(int a, int b, int *pq, int *pr)
{
    *pq = a / b;
    *pr = a % b;
}

void output(int quotient, int remainder)
{
    printf("두 수의 몫 : %d, 나머지 : %d\n", quotient, remainder);
}
