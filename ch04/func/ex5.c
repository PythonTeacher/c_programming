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

    printf("세 과목의 점수를 입력하세요 : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    tot = getTot(kor, eng, mat);
    avg = getAvg(tot);

    printf("총점 : %d점, 평균 : %.1lf점\n", tot, avg);
}

int getTot(int kor, int eng, int mat)
{
    return kor + eng + mat;
}

double getAvg(int tot)
{
    return tot / 3.0;
}
