#include <stdio.h>

// �Լ� �����ϱ�
void printFollow()
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%2d��° : ", i);
        printf("��ο� ��ο� ��!!\n");
    }
    return;
}

int main()
{
    printFollow();  // �Լ� ȣ���ϱ�
    return 0;
}
