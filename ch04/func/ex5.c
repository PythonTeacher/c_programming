#include <stdio.h>
#include "ex5.h"

int main()
{
    calcScore();
    return 0;
}

void calcScore()
{
    int kor, eng, mat, tot;
    double avg;

    printf("�� ������ ������ �Է��ϼ��� : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    tot = getTot(kor, eng, mat);
    avg = getAvg(tot);

    printf("���� : %d��, ��� : %.1lf��\n", tot, avg);
}

int getTot(int kor, int eng, int mat)
{
    return kor + eng + mat;
}

double getAvg(int tot)
{
    return tot / 3.0;
}
