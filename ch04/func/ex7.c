#include <stdio.h>

int isPrime(int num);

int main()
{
    int i;

    printf("< 2부터 100까지 소수 출력 >\n");

    for(i=2; i<=100; i++)
    {
        if(isPrime(i))
            printf("%5d", i);

        if(i % 10 == 0) printf("\n");
    }

    return 0;
}

int isPrime(int num)
{
    int i;

    for(i=2; i<num; i++)  // 2 ~ 자기자신-1
    {
        if(num % i == 0) return 0;     // 소수가 아닌 수
    }

    return 1;       // 소수인 수
}









