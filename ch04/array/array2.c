/**
3. 이차원 배열 이용
3명 학생의 3과목 점수를 입력받아 각 과목별, 학생별 총점을 출력하는
구조화된 프로그램을 작성하시오.

입력 예)
50 80 100
96 88 66
100 85 90

출력 예)
50 80 100 230
96 88 66 250
100 85 90 275
246 253 256 755
*/

#include <stdio.h>

int main()
{
    int score[4][4], i, j;
    int sum=0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        sum=0;
        for(j=0; j<3; j++)
        {
            sum += score[i][j];
            //printf("%d ", score[i][j]);
        }
        score[i][3] = sum;
    }

    for(i=0; i<4; i++)
    {
        sum=0;
        for(j=0; j<3; j++)
        {
            sum += score[j][i];
            //printf("%d ", score[j][i]);
        }
        score[3][i] = sum;
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }
}
