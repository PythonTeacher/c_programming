#include <stdio.h>
#include <stdlib.h>     // rand(), srand()
#include <time.h>       // time()

int main()
{
    int i;

    srand(time(NULL));      // �������� �̾��ֱ� ���� �ʱ�ȭ �Լ�
                            // ����ǥ�� ���� �ٲ��ִ� �Լ�

    //printf("%d\n", time(NULL));     // 1970�� 1�� 1�� ~ ������� �ʸ� �������ִ� �Լ�


    /*for(i=0; i<10; i++)
        printf("%d\n", rand());       // ������ ���� �̾��ִ� �Լ�
    */
    // 1�� ~ 38������ ��ȣ �̱�
    printf("��÷ => %d��\n", rand() % 38 + 1); // 0~37 -> 1~38

    return 0;
}
