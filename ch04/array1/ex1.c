#include <stdio.h>

int main()
{
    int score[5];       // �迭����
    int i, tot=0;

    printf("������ �Է��ϼ��� : ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &score[i]);
        tot += score[i];
    }

    printf("��� : %.1f��\n", tot/5.0);

    return 0;
}

