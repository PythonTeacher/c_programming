#include <stdio.h>

int main()
{
    int score[5];
    int tot=0, i;

    printf("������ �Է��ϼ��� : ");

    for(i=0; i<5; i++)
    {
        //1. �迭ǥ�� ���
        scanf("%d", &score[i]);
        tot += score[i];

        //2. ������ ǥ�� ���
        scanf("%d", score+i);
        tot += *(score+i);
    }

    printf("��� :%.1lf\n", tot / 5.0);
    return 0;
}
