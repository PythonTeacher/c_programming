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
    printf("���� �Է� : ");
    inputScore(score);

    tot = getTotal(score);    // �迭���� ���ڷ� �ѱ� (�迭��ü�� �Լ��� ���ڷ� �ѱ�� ����)
                              // �� ��Һ� �� ���簡 �Ͼ�� �ϹǷ� ��ȿ������
                              // ��� �迭�� �����ּҰ��� �ѱ�
    avg=tot/5.0;

    printf("���� : %d��\n", tot);
    printf("��� : %.1f��", avg);

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

int getTotal(int score[])     // �迭�� �����ּҰ��� �޴� ������ ������ ������ (int *score�� ����)
{
    int i, tot=0;
    for(i=0; i<5; i++)
    {
        printf("[%d] %d ", i, score[i]);
        tot += score[i];      // ������ ������ �迭��ó�� ��밡����
    }
    return tot;
}
