#include <stdio.h>

int main()
{
    int array[4][3];
    int i, j, tot=0;

    printf("정수값을 입력하세요 => ");

    // 1. 값 입력
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    // 2. 값 출력
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d", array[i][j]);
            tot += array[i][j];
        }
        printf("\n");
    }

    printf("\n총합 : %d\n", tot);

    return 0;
}
