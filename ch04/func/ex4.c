#include <stdio.h>

int getTot(int kor, int eng, int mat)
{
    int tot;
    tot = kor + eng + mat;
    return tot;
}

double getAvg(int tot)
{
    double avg;
    avg = tot / 3.0;
    return avg;
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

int main()
{
    calcScore();

    return 0;
}







