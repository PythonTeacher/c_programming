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

    while(1)            // for( ; ; )
    {
        printf("�޴��� �����ϼ��� =>");
        scanf("%d", &menu);

        if(menu == 9) break;

        switch(menu)
        {
        case 1:
            printf("[%d] ¥��� ����\n", ++cnt);
            break;
        case 2:
            printf("[%d] «�� ����\n", ++cnt);
            break;
        case 3:
            printf("[%d] ������ ����\n", ++cnt);
            break;
        //case 9:
        //    break;
        default:
            printf("���� �޴��Դϴ�.\n");
        }

        if(cnt == 3) break;     // �ݺ��� ����
    }

    printf("\n���α׷��� �����մϴ�\n");
    return 0;
}
