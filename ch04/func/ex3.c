#include <stdio.h>

int getTot(int a, int b, int c)     // int a, b, c (X)
{
    return a + b + c;
}

double getAvg(int tot)
{
    return tot / 3.0;
}

int main()
{
    int kor, eng, mat, tot;
    double avg;

    printf("�� ������ ������ �Է��ϼ��� : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    // �������ϱ�
    tot = getTot(kor, eng, mat);

    // ��ձ��ϱ�
    avg = getAvg(tot);

    printf("���� : %d��, ��� : %.1lf��\n", tot, avg);

    return 0;
}
