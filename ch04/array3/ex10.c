#include <stdio.h>

#define ROW     4
#define COL     100

int main()
{
    int i;
    //char main[40];
    //char soup[40];
    //char side[100];
    //char dessert[40];
    char menu[ROW][COL];
    char type[4][10]={"메인", "국", "반찬", "디저트"};

    for(i=0; i<ROW; i++)
    {
        printf("오늘의 %s은/는? ", type[i]);
        gets(menu[i]);
    }

    /*puts("오늘의 메인은?");
    gets(menu[0]);

    puts("오늘의 국은?");
    gets(menu[1]);

    puts("오늘의 반찬은?");
    gets(menu[2]);

    puts("오늘의 디저트는?");
    gets(menu[3]);*/

    puts("");
    puts("<< 오늘의 메뉴 >>");
    for(i=0; i<ROW; i++)
    {
        puts(menu[i]);
    }

    return 0;
}
