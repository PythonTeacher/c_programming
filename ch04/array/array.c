#include <stdio.h>

int main()
{
    //int a, b, c, d, e;
    int score[5];       // 배열의 초기화 int score[5] ={0,};

    int tot=0;
    double avg;
    int i;

    //a=100, b=90, c=80, d=70, e=60;
    //score[0] = 100, score[1] = 90, score[2] = 80, score[3] = 70, score[4] = 60;

    printf("점수 입력 : ");
    //scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    //scanf("%d%d%d%d%d",&score[0], &score[1], &score[2], &score[3], &score[4]);
    for(i=0; i<5; i++)
    {
        scanf("%d", &score[i]);
    }

    //tot=a+b+c+d+e;
    for(i=0; i<5; i++)
    {
        printf("[%d] %d ", i, score[i]);
        tot += score[i];
    }

    avg=tot/5.0;

    printf("\n총점 : %d점\n", tot);
    printf("평균 : %.1f점", avg);

    return 0;
}
