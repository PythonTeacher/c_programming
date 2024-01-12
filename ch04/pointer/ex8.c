#include <stdio.h>

void input(int *pa, int *pb);
void compare(int n1, int n2, int *pMin, int *pMax);
void output(int min, int max);

int main()
{
    int n1, n2;
    int min, max;

    input(&n1, &n2);
    // n1, n2�� ���� ������

    compare(n1, n2, &min, &max);
    // min, max�� ���� �� ����

    output(min, max);

    return 0;
}

void input(int *pa, int *pb)
{
    printf("���� �ΰ� �Է� => ");
    scanf("%d %d", pa, pb);
}

void compare(int n1, int n2, int *pMin, int *pMax)
{
    if(n1 < n2)
    {
        *pMin = n1;
        *pMax = n2;
    }
    else
    {
        *pMin = n2;
        *pMax = n1;
    }
}

void output(int min, int max)
{
    if(min == max)
        printf("���� ��\n");
    else
        printf("������ :%d, ū�� : %d\n", min, max);
}
