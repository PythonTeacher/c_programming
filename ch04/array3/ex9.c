#include <stdio.h>

#define ROW     3
#define COL     4

void printLine();

int main()
{
    int i, j;
    int house[ROW+1][COL+1] = {0};

    printf("<< ����Ʈ�� ��� �ο��� �Է� >>\n");
    for(i=0; i<ROW; i++)
    {
        printf("%d���� ��� ��� => ", i+1);
        for(j=0; j<COL; j++)
        {
            scanf("%d", &house[i][j]);
            // ���� �ο��� ���
            house[i][COL] += house[i][j];
            // ���κ� �ο��� ���
            house[ROW][j] += house[i][j];
            // ��ü �ο��� ���
            //house[3][4] += house[i][j];
        }
        house[ROW][COL] += house[i][COL];
    }

    printf("\n<< ����Ʈ�� ��� �ο��� ��� >>");
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
