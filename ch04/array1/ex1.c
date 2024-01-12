#include <stdio.h>

int main()
{
    int score[5];       // 배열선언
    int i, tot=0;

    printf("점수를 입력하세요 : ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &score[i]);
        tot += score[i];
    }

    printf("평균 : %.1f점\n", tot/5.0);

    return 0;
}

