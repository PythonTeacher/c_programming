#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    int tot;
    double avg;

    printf("������ �Է��ϼ��� : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    tot=a+b+c+d+e;
    avg=tot/5.0;

    printf("��� : %.1f��", avg);

    return 0;
}
