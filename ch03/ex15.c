#include <stdio.h>

int main()
{
    int menu=0;

    printf("< �߱��� �޴��� >\n");
    printf("1. ¥���\n");
    printf("2. «��\n");
    printf("3. ������\n");
    printf("9. ����\n");
    printf("---------------------\n");

    while(menu != 9)
    {
        printf("�޴��� �����ϼ��� => ");
        scanf("%d", &menu);

        switch(menu)
        {
        case 1:
            printf("¥����� �����ϼ̽��ϴ�!!\n\n");
            break;
        case 2:
            printf("«���� �����ϼ̽��ϴ�!!\n\n");
            break;
        case 3:
            printf("�������� �����ϼ̽��ϴ�!!\n\n");
            break;
        case 9:
            break;
        default:
            printf("���� �޴��Դϴ�!!\n\n");
        }
    }

    printf("\n���α׷��� �����մϴ�\n");
    return 0;
}
