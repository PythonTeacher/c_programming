#include <stdio.h>

#define ROW     4
#define COL     3

int main()
{
    int i, j;
    int score[ROW][COL+1]={0};      // ���� ���� ���� ����
    double avg[ROW];

    // 1. ���� �Է�
    for(i=0; i<ROW; i++)
    {
        printf("%d�� �л� ���� �Է� => ", i+1);
        for(j=0; j<COL; j++)
        {
            scanf("%d", &score[i][j]);
            // ���� ���
            score[i][COL] += score[i][j];
        }
        // ��� ���
        avg[i] = score[i][COL] / (double)COL;
    }

    printf("��ȣ\t����\t����\t����\t����\t���\n");

    // 2. ���� ���
    for(i=0; i<ROW; i++)
    {
        printf("%d��\t", i+1);
        for(j=0; j<=COL; j++)
        {
            printf("%3d\t", score[i][j]);
        }
        printf("%.1lf\n", avg[i]);
    }

    return 0;
}
