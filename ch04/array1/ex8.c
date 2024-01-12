#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int team[10];           // 조순서
    int check[10]={0};      // 뽑혔으면 1, 안 뽑혔으면 0
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

    printf("<< 발표 순서 출력 >>\n");
    for(i=0; i<10; i++)
    {
        printf("%2d번째 조 => %2d조\n", i+1, team[i]);
    }

    return 0;
}
