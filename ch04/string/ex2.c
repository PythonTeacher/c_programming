#include <stdio.h>

int main()
{
    int num;
    char *className = NULL;

    while(1)
    {
        printf("���� �Է��ϼ��� (����:9) => ");
        scanf("%d", &num);

        switch(num)
        {
        case 1:
            className = "�̺��";      break;
        case 2:
            className = "������";      break;
        case 3:
        case 4:
            className = "���ð�";      break;
        case 5:
        case 6:
            className = "�ع��";      break;
        case 9:
            puts("Bye~~");      return 0;
        default:
            puts("�׷��� ����!!!");
            continue;
        }

        printf("%s�� ���Ű� ȯ��~~~\n", className);
    }

    return 0;
}
