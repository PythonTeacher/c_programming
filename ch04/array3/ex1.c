#include <stdio.h>

int main()
{
    int array[4][3];
    int i, j, tot=0;

    printf("�������� �Է��ϼ��� => ");

    // 1. �� �Է�
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    // 2. �� ���
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d", array[i][j]);
            tot += array[i][j];
        }
        printf("\n");
    }

    printf("\n���� : %d\n", tot);

    return 0;
}
