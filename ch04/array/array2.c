/**
3. ������ �迭 �̿�
3�� �л��� 3���� ������ �Է¹޾� �� ����, �л��� ������ ����ϴ�
����ȭ�� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
50 80 100
96 88 66
100 85 90

��� ��)
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
