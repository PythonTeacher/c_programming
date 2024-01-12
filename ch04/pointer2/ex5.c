#include <stdio.h>

int main()
{
    int score[5];
    int tot=0, i;
    int *p=score;

    printf("점수를 입력하세요 : ");

    for(i=0; i<5; i++)
    {
        //1. 배열명을 사용한 배열표현 방식
        /*scanf("%d", &score[i]);
        tot += score[i];*/

        //2. 배열명을 사용한 포인터표현 방식
        /*scanf("%d", score+i);
        tot += *(score+i);*/

        //3. 포인터 변수를 사용한 배열 표현 방식
        scanf("%d", &p[i]);
        tot += p[i];

        //4. 포인터 변수를 사용한 포인터 표현 방식
        scanf("%d", p+i);
        tot += *(p+i);
    }

    printf("평균 : %.1lf점\n", tot/5.0);

    return 0;
}
