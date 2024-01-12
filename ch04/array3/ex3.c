#include <stdio.h>

#define ROW     4
#define COL     3

int main()
{
    int array[ROW][COL];
    int i, j, tot=0;

    printf("정수값을 입력하세요 => ");

    int row, col;
    row = sizeof(array) / sizeof(array[0]); // 48 / 12
    col = sizeof(array[0]) / sizeof(array[0][0]);   // 12 / 4

    // 1. 값 입력
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    // 2. 값 출력
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%5d", array[i][j]);
            tot += array[i][j];
        }
        printf("\n");
    }

    printf("\n총합 : %d\n", tot);

    return 0;
}
