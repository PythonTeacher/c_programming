#include <stdio.h>

int main()
{
    int a = 2, b = 3;

    // 1. �ӽú��� �����
    int temp;

    temp = a;       // temp : 2
    a = b;          // a : 3
    b = temp;       // b : 2

    printf("��� => %d, %d\n", a, b);

    // 2. XOR ���� �̿��ϱ�
    a = 2, b = 3;       // a : 10, b : 11

    a = a ^ b;          // a : 01
    b = a ^ b;          // b : 10
    a = a ^ b;          // a : 11

    printf("��� => %d, %d\n", a, b);

    return 0;
}
