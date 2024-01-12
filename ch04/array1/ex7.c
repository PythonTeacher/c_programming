#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice[6]={0};
    int i, num;

    srand(time(NULL));

    // 주사위 입력
    for(i=0; i<10; i++)
    {
        num = rand() % 6 + 1;     // 1~6
        printf("[%d] 주사위를 던지세요 => %d\n", i+1, num);
        dice[num-1]++;
    }

    // 결과 출력
    printf("\n<< 주사위 결과 >>\n");
    for(i=0; i<6; i++)
    {
        printf("%d : %d번\n", i+1, dice[i]);
    }

    return 0;
}
