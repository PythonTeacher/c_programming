#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    int random;
    int i;

    // [����ǥ]��?
    // <stdlib.h>��� ������� �ȿ��� ���� ���̺��� ����ֽ��ϴ�.
    // ����ǥ���� 0~32767������ ����(unsigned int)�� �������迭�� �Ǿ��ֽ��ϴ�

    // rand() �Լ�
    // ����ǥ �ȿ��� �������� ���ڸ� �̾��ִ� ���� �Լ�
    // printf("%d\n", rand());

    // srand() �Լ��� ���� �Ź� ����ǥ�� ���� �ٲ���� ��
    // srand() ���̿��� ����ǥ ���� �ٲ��ֱ� ���� seed���� ���� ��
    // time(NULL)�� ���� seed�� ������ �ֱ�

    // printf("%d\n", time(NULL));     // 1970�� 1�� 1�Ϻ��� ���ݱ����� �ð��� �� ������ �������� �Լ�

    // rand()�� srand()�� stdlib.h include
    // time()�� time.h include

    srand(time(NULL));

    for(i=5; i>0; i--)
    {
        Sleep(1000);
        system("cls");
        printf("%d", i);
    }
    printf("\n");
    Sleep(1000);

    random = rand() % 38 + 1;   // 0~37 -> 1~38
    printf("�����մϴ�!! => %d��\n", random);

    return 0;
}
