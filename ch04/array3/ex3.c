#include <stdio.h>

#define ROW     4
#define COL     3

int main()
{
    int array[ROW][COL];
    int i, j, tot=0;

    printf("�������� �Է��ϼ��� => ");

    int row, col;
    row = sizeof(array) / sizeof(array[0]); // 48 / 12
    col = sizeof(array[0]) / sizeof(array[0][0]);   // 12 / 4

    // 1. �� �Է�
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    // 2. �� ���
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%5d", array[i][j]);
            tot += array[i][j];
        }
        printf("\n");
    }

    printf("\n���� : %d\n", tot);

    return 0;
}
