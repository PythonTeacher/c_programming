#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice[6]={0};
    int i, num;

    srand(time(NULL));

    // �ֻ��� �Է�
    for(i=0; i<10; i++)
    {
        num = rand() % 6 + 1;     // 1~6
        printf("[%d] �ֻ����� �������� => %d\n", i+1, num);
        dice[num-1]++;
    }

    // ��� ���
    printf("\n<< �ֻ��� ��� >>\n");
    for(i=0; i<6; i++)
    {
        printf("%d : %d��\n", i+1, dice[i]);
    }

    return 0;
}
