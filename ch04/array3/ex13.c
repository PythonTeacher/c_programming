#include <stdio.h>

int main()
{
    char menu[3][4][100];
    char days[3][10]={"����", "����", "����"};
    char types[4][10]={"��", "��", "����", "����Ʈ"};
    int i, j;

    printf("======<< �޴� �Է� >>========\n");
    for(i=0; i<3; i++)
    {
        printf("%s�� ", days[i]);

        for(j=0; j<4; j++)
        {
            printf("%s��(��)? ", types[j]);
            gets(menu[i][j]);
        }
        puts("");
    }

    printf("\n======<< �޴� ��� >>========\n");
    for(i=0; i<3; i++)
    {
        printf("%s�� ", days[i]);

        for(j=0; j<4; j++)
        {
            printf("%s��(��) %s\n", types[j], menu[i][j]);
        }
        puts("");
    }

    return 0;
}
