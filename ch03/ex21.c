#include <stdio.h>

int main()
{
    int menu, cnt=0;

    printf("< 중국집 메뉴판 >\n");
    printf("1. 짜장면\n");
    printf("2. 짬뽕\n");
    printf("3. 탕수육\n");
    printf("9. 종료\n");
    printf("---------------------\n");

    while(1)            // for( ; ; )
    {
        printf("메뉴를 선택하세요 =>");
        scanf("%d", &menu);

        if(menu == 9) break;

        switch(menu)
        {
        case 1:
            printf("[%d] 짜장면 선택\n", ++cnt);
            break;
        case 2:
            printf("[%d] 짬뽕 선택\n", ++cnt);
            break;
        case 3:
            printf("[%d] 탕수육 선택\n", ++cnt);
            break;
        //case 9:
        //    break;
        default:
            printf("없는 메뉴입니다.\n");
        }

        if(cnt == 3) break;     // 반복문 종료
    }

    printf("\n프로그램을 종료합니다\n");
    return 0;
}
