#include <stdio.h>

int main()
{
    char menu[3][4][100];
    char days[3][10]={"어제", "오늘", "내일"};
    char types[4][10]={"밥", "국", "반찬", "디저트"};
    int i, j;

    printf("======<< 메뉴 입력 >>========\n");
    for(i=0; i<3; i++)
    {
        printf("%s의 ", days[i]);

        for(j=0; j<4; j++)
        {
            printf("%s은(는)? ", types[j]);
            gets(menu[i][j]);
        }
        puts("");
    }

    printf("\n======<< 메뉴 출력 >>========\n");
    for(i=0; i<3; i++)
    {
        printf("%s의 ", days[i]);

        for(j=0; j<4; j++)
        {
            printf("%s은(는) %s\n", types[j], menu[i][j]);
        }
        puts("");
    }

    return 0;
}
