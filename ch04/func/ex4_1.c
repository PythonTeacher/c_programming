#include <stdio.h>

int add(int a, int b)       // int a, b
{
    return a + b;
}

int sub(int a, int b)       // int a, b
{
    return a - b;
}

int mul(int a, int b)       // int a, b
{
    return a * b;
}

double div(int a, int b)       // int a, b
{
    return a / (double)b;
}

int main()
{
    int a, b;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %.1lf\n", a, b, div(a, b));

    return 0;
}




