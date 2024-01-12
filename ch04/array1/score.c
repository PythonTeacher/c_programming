#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    int tot;
    double avg;

    printf("점수를 입력하세요 : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    tot=a+b+c+d+e;
    avg=tot/5.0;

    printf("평균 : %.1f점", avg);

    return 0;
}
