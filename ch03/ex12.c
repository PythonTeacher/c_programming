#include <stdio.h>

int main()
{
    int menu;

    printf("< �߱��� �޴��� >\n");
    printf("1. ¥���\n");
    printf("2. «��\n");
    printf("3. ������\n");
    printf("--------------------\n");
    printf("�޴��� �����ϼ��� => ");
    scanf("%d", &menu);

    // if��
    if(menu == 1)
        printf("¥����� �����ϼ̽��ϴ�!!\n");
    else if(menu == 2)
        printf("«���� �����ϼ̽��ϴ�!!\n");
    else if(menu == 3)
        printf("�������� �����ϼ̽��ϴ�!!\n");
    else
        printf("���� �޴��Դϴ�!!\n");

    switch(menu)
    {
    case 1:
        printf("¥����� �����ϼ̽��ϴ�!!\n");
        break;
    case 2:
        printf("«���� �����ϼ̽��ϴ�!!\n");
        break;
    case 3:
        printf("�������� �����ϼ̽��ϴ�!!\n");
        break;
    default:
        printf("���� �޴��Դϴ�!!\n");
    }

    return 0;
}
