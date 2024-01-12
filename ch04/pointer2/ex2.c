#include <stdio.h>

int main()
{
    int score[5];
    int tot=0, i;

    printf("점수를 입력하세요 : ");

    for(i=0; i<5; i++)
    {
        //1. 배열표현 방식
        scanf("%d", &score[i]);
        tot += score[i];

        //2. 포인터 표현 방식
        scanf("%d", score+i);
        tot += *(score+i);
    }

    printf("평균 :%.1lf\n", tot / 5.0);
    return 0;
}
