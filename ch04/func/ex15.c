#include <stdio.h>

int fibo(int n);
void fibo1(int n);

int main()
{
    int i, num;

    printf("정수 입력 => ");
    scanf("%d", &num);

    printf("1. 재귀함수 방식 \n");
    for(i=0; i<num; i++)
        printf("%d ", fibo(i));

    printf("\n\n2. 반복문 방식 \n");
    fibo1(num);

    return 0;
}

int fibo(int n)
{
    if(n <= 1) return n;
    else return fibo(n-1) + fibo(n-2);
}

void fibo1(int n)
{
    int i;
    int a=0, b=1, sum;

    printf("%d %d ", a, b); // 0 1

    for(i=2; i<n; i++)
    {
        sum = a + b;    // 1
        printf("%d ", sum);
        a = b;   // a:1
        b = sum; // b:1
    }
}









