#include <stdio.h>

int main()
{
    int year;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &year);

    if(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
        printf("����Դϴ�\n");
    else
        printf("�����Դϴ�\n");

    /*if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("�����Դϴ�\n");
    else
        printf("����Դϴ�\n");

    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
                printf("�����Դϴ�\n");
            else
                printf("����Դϴ�\n");
        }
        else
            printf("�����Դϴ�\n");
    }
    else
        printf("����Դϴ�\n");
    */
    return 0;
}
