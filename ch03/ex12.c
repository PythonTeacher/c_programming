#include <stdio.h>

int main()
{
    int menu;

    printf("< 중국집 메뉴판 >\n");
    printf("1. 짜장면\n");
    printf("2. 짬뽕\n");
    printf("3. 탕수육\n");
    printf("--------------------\n");
    printf("메뉴를 선택하세요 => ");
    scanf("%d", &menu);

    // if문
    if(menu == 1)
        printf("짜장면을 선택하셨습니다!!\n");
    else if(menu == 2)
        printf("짬뽕을 선택하셨습니다!!\n");
    else if(menu == 3)
        printf("탕수육을 선택하셨습니다!!\n");
    else
        printf("없는 메뉴입니다!!\n");

    switch(menu)
    {
    case 1:
        printf("짜장면을 선택하셨습니다!!\n");
        break;
    case 2:
        printf("짬뽕을 선택하셨습니다!!\n");
        break;
    case 3:
        printf("탕수육을 선택하셨습니다!!\n");
        break;
    default:
        printf("없는 메뉴입니다!!\n");
    }

    return 0;
}
