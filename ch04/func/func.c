#include <stdio.h>

// �Լ� �����ϱ�
void getMax(int a, int b)        // �Ű����� ����
{
    int max;
    max = (a > b) ? a : b;
    printf("����1 : %d, ����2: %d -> ū��: %d\n", a, b, max);

    //return;
}

int main()
{
    int a = 10, b = 20;
    getMax(a, b);           // ���� ����

    a = 5, b = 3;
    getMax(a, b);           // ���� ����

    a = 100, b = 200;
    getMax(a, b);           // ���� ����

    return 0;
}
