#include <stdio.h>

// switch.c
int main()
{
    int menu;

    printf("메뉴 입력 : ");
    scanf("%d", &menu);

    switch(menu)
    {
    case 1:     // colon
        printf("치킨\n");
        break;  // switch 빠져나감
    case 2:
        printf("피자\n");
        break;
    case 3:
        printf("짜장면\n");
        break;
    default:
        printf("굶자!!\n");
    }
    return 0;
}
