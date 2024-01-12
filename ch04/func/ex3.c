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

    printf("세 과목의 점수를 입력하세요 : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    // 총점구하기
    tot = getTot(kor, eng, mat);

    // 평균구하기
    avg = getAvg(tot);

    printf("총점 : %d점, 평균 : %.1lf점\n", tot, avg);

    return 0;
}
