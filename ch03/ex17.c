#include <stdio.h>

int main()
{
    int menu, cnt=0;

    printf("< �߱��� �޴��� >\n");
    printf("1. ¥���\n");
    printf("2. «��\n");
    printf("3. ������\n");
    printf("9. ����\n");
    printf("---------------------\n");

    do
    {
        printf("�޴��� �����ϼ��� => ");
        scanf("%d", &menu);

        switch(menu)
        {
        case 1:
            printf("[%d]¥����� �����ϼ̽��ϴ�!!\n", ++cnt);
            break;
        case 2:
            printf("[%d]«���� �����ϼ̽��ϴ�!!\n", ++cnt);
            break;
        case 3:
            printf("[%d]�������� �����ϼ̽��ϴ�!!\n", ++cnt);
            break;
        case 9:
            break;
        default:
            printf("���� �޴��Դϴ�!!\n");
        }

        if(cnt == 3) break; // while�� ����

    } while(menu != 9);

    printf("\n���α׷��� �����մϴ�\n");
    return 0;
}
