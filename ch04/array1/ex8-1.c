#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int team[10];           // 조순서
    int check[10]={0};      // 0: 안 뽑힌 조, 1: 뽑힌 조
    int num, i=0, j=0;

    srand(time(NULL));

    // 첫번째 방식
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

    // 두번째 방식
    for(i=0; i<10; i++)
    {
        do
        {
            num = rand() % 10 + 1;
        } while(check[num - 1]);

        team[i] = num;
        check[num - 1] = 1;
    }

    printf("<< 발표 순서 출력 >>\n");
    for(i=0; i<10; i++)
    {
        printf("%2d번째 조 => %2d조\n", i+1, team[i]);
    }

    return 0;
}
