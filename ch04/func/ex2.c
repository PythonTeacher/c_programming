#include <stdio.h>

// �Լ� ������ �����ϱ�
void printFollow(int num);      // void printFollow(int);

int main()
{
    int num;

    printf("�ݺ� Ƚ�� �Է� : ");
    scanf("%d", &num);

    printFollow(num);      // �Լ� ȣ���ϱ�
    return 0;
}

// �Լ� �����ϱ�
void printFollow(int num)
{
    int i;
    for(i=0; i<num; i++)
    {
        printf("%2d��° : ", i + 1);
        printf("��ο� ��ο� ��!!\n");
    }
    //return;
}
