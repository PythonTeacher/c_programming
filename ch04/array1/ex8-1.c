#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int team[10];           // ������
    int check[10]={0};      // 0: �� ���� ��, 1: ���� ��
    int num, i=0, j=0;

    srand(time(NULL));

    // ù��° ���
    for(i=0; i<10; i++)
    {
        team[i] = rand() % 10 + 1;    // 1~10

        for(j=0; j<i; j++)
        {
            if(team[i] == team[j])
            {
                i--;
                break;
            }
        }
    }

    // �ι�° ���
    for(i=0; i<10; i++)
    {
        do
        {
            num = rand() % 10 + 1;
        } while(check[num - 1]);

        team[i] = num;
        check[num - 1] = 1;
    }

    printf("<< ��ǥ ���� ��� >>\n");
    for(i=0; i<10; i++)
    {
        printf("%2d��° �� => %2d��\n", i+1, team[i]);
    }

    return 0;
}
