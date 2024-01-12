#include <stdio.h>

#define ROW     3
#define COL     4

void printLine();

int main()
{
    int i, j;
    int house[ROW+1][COL+1] = {0};

    printf("<< 아파트에 사는 인원수 입력 >>\n");
    for(i=0; i<ROW; i++)
    {
        printf("%d층에 사는 사람 => ", i+1);
        for(j=0; j<COL; j++)
        {
            scanf("%d", &house[i][j]);
            // 층별 인원수 계산
            house[i][COL] += house[i][j];
            // 라인별 인원수 계산
            house[ROW][j] += house[i][j];
            // 전체 인원수 계산
            //house[3][4] += house[i][j];
        }
        house[ROW][COL] += house[i][COL];
    }

    printf("\n<< 아파트에 사는 인원수 출력 >>");
    printLine();
    for(i=0; i<=ROW; i++)
    {
        for(j=0; j<=COL; j++)
        {
            printf("%3d |", house[i][j]);
        }
        printLine();
    }

    return 0;
}

void printLine()
{
    printf("\n-------------------------\n");
}
