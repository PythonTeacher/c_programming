#include <stdio.h>

int main()
{
    int menu=0, cnt=0;

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
            printf("[%d]¥����� �����ϼ̽��ϴ�!!\n", ++cnt);
            break;
        case 2:
            printf("[%d]«���� �����ϼ̽��ϴ�!!\n", ++cnt);
            break;
        case 3:
            printf("[%d]�������� �����ϼ̽��ϴ�!!\n", ++cnt);
            break;
        case 9:
            break;      // switch ����
        default:
            printf("���� �޴��Դϴ�!!\n");
        }
        if(cnt == 3) break; // while ����
    }

    printf("\n���α׷��� �����մϴ�\n");
    return 0;
}
