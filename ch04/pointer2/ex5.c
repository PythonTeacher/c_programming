#include <stdio.h>

int main()
{
    int score[5];
    int tot=0, i;
    int *p=score;

    printf("������ �Է��ϼ��� : ");

    for(i=0; i<5; i++)
    {
        //1. �迭���� ����� �迭ǥ�� ���
        /*scanf("%d", &score[i]);
        tot += score[i];*/

        //2. �迭���� ����� ������ǥ�� ���
        /*scanf("%d", score+i);
        tot += *(score+i);*/

        //3. ������ ������ ����� �迭 ǥ�� ���
        scanf("%d", &p[i]);
        tot += p[i];

        //4. ������ ������ ����� ������ ǥ�� ���
        scanf("%d", p+i);
        tot += *(p+i);
    }

    printf("��� : %.1lf��\n", tot/5.0);

    return 0;
}
