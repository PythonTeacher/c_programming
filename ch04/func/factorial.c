#include <stdio.h>

int multiply(int n);
int factorial(int n);

int main()
{
    int num;

    scanf("%d", &num);

    printf("<< �ݺ��� �̿� >>\n");
    printf("1 ~ %d������ �� : %d\n", num, multiply(num));

    printf("\n\n<< ����Լ� �̿� >>\n");
    printf("1 ~ %d������ �� : %d\n", num, factorial(num));

    return 0;
}

int multiply(int n)
{
    int i, res = 1;

    for(i=2; i<=n; i++)
    {
        res = res * i;  // 1*2=2 -> 2*3=6 -> 6*4=24 -> 24*5=120
    }

    return res;
}

int factorial(int n)
{
    if(n == 1) return 1;
    else return n * factorial(n-1);
}













