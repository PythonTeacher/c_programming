#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int team[10];           // ������
    int check[10]={0};      // �������� 1, �� �������� 0
    int num, i=0;

    srand(time(NULL));

    /*while(1)
    {
        num = rand() % 10 + 1;    // 1~10
        if(check[num-1] == 1) continue;
        else {
            team[i++] = num;
            check[num-1] = 1;
        }
        if(i == 10) break;
    }*/
    for(i=0; i<10; i++)
    {
        num = rand() % 10 + 1;    // 1~10
        while(check[num-1])
        {
            num = rand() % 10 + 1;    // 1~10
        }
        team[i] = num;
        check[num-1] = 1;
    }

    printf("<< ��ǥ ���� ��� >>\n");
    for(i=0; i<10; i++)
    {
        printf("%2d��° �� => %2d��\n", i+1, team[i]);
    }

    return 0;
}
