#include <stdio.h>

#define ROW     4
#define COL     3

int main()
{
    int i, j;
    int score[ROW][COL+1]={0};      // 국어 영어 수학 총점
    double avg[ROW];

    // 1. 점수 입력
    for(i=0; i<ROW; i++)
    {
        printf("%d번 학생 점수 입력 => ", i+1);
        for(j=0; j<COL; j++)
        {
            scanf("%d", &score[i][j]);
            // 총점 계산
            score[i][COL] += score[i][j];
        }
        // 평균 계산
        avg[i] = score[i][COL] / (double)COL;
    }

    printf("번호\t국어\t영어\t수학\t총점\t평균\n");

    // 2. 점수 출력
    for(i=0; i<ROW; i++)
    {
        printf("%d번\t", i+1);
        for(j=0; j<=COL; j++)
        {
            printf("%3d\t", score[i][j]);
        }
        printf("%.1lf\n", avg[i]);
    }

    return 0;
}
