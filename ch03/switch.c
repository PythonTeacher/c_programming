#include <stdio.h>

// switch.c
int main()
{
    int menu;

    printf("�޴� �Է� : ");
    scanf("%d", &menu);

    switch(menu)
    {
    case 1:     // colon
        printf("ġŲ\n");
        break;  // switch ��������
    case 2:
        printf("����\n");
        break;
    case 3:
        printf("¥���\n");
        break;
    default:
        printf("����!!\n");
    }
    return 0;
}
