#include <stdio.h>

int isPrime(int num);

int main()
{
    int i;

    printf("< 2���� 100���� �Ҽ� ��� >\n");

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

    for(i=2; i<num; i++)  // 2 ~ �ڱ��ڽ�-1
    {
        if(num % i == 0) return 0;     // �Ҽ��� �ƴ� ��
    }

    return 1;       // �Ҽ��� ��
}









