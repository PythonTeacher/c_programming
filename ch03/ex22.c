#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int answer;             // ������
    int myanswer;           // ����� �Է���

    int i;

    srand(time(NULL));          // �ʱ�ȭ �۾� (�ѹ���)

    // 1~10������ ������ ���
    answer = rand() % 10 + 1;

    while(1)
    {
        printf("�� �Է� : " );
        scanf("%d", &myanswer);

        if(answer == myanswer)
        {
            printf("���� => %d\n", answer);
            break;
        }
        else if(answer > myanswer)
            printf("%d���� Ů�ϴ�\n", myanswer);
        else
           printf("%d���� �۽��ϴ�\n", myanswer);
    }


    return 0;
}

