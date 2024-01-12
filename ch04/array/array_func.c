#include <stdio.h>

void inputScore(int score[]);
int getTotal(int score[]) ;

int main()
{
    int score[5]={0,};
    int tot=0;
    double avg;
    int i;

    /*for(i=0; i<5; i++)
    {
        scanf("%d", &score[i]);
    }*/
    printf("점수 입력 : ");
    inputScore(score);

    tot = getTotal(score);    // 배열명을 인자로 넘김 (배열자체를 함수의 인자로 넘길수 없음)
                              // 각 요소별 값 복사가 일어나야 하므로 비효율적임
                              // 대신 배열의 시작주소값을 넘김
    avg=tot/5.0;

    printf("총점 : %d점\n", tot);
    printf("평균 : %.1f점", avg);

    return 0;
}

void inputScore(int score[])
{
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d", &score[i]);
    }
}

int getTotal(int score[])     // 배열의 시작주소값을 받는 포인터 변수를 선언함 (int *score와 동일)
{
    int i, tot=0;
    for(i=0; i<5; i++)
    {
        printf("[%d] %d ", i, score[i]);
        tot += score[i];      // 포인터 변수를 배열명처럼 사용가능함
    }
    return tot;
}
