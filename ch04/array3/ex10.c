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
    char type[4][10]={"����", "��", "����", "����Ʈ"};

    for(i=0; i<ROW; i++)
    {
        printf("������ %s��/��? ", type[i]);
        gets(menu[i]);
    }

    /*puts("������ ������?");
    gets(menu[0]);

    puts("������ ����?");
    gets(menu[1]);

    puts("������ ������?");
    gets(menu[2]);

    puts("������ ����Ʈ��?");
    gets(menu[3]);*/

    puts("");
    puts("<< ������ �޴� >>");
    for(i=0; i<ROW; i++)
    {
        puts(menu[i]);
    }

    return 0;
}
