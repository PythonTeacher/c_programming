#include <stdio.h>
#include <string.h>

int main()
{
    const char song[][100] = {"������ ����� �� ���",
                              "�ܿ��",
                              "�����������ܿ�",
                              "������ ����",
                              "������ ����",
                              "���� ��ü�� �տ���",
                              "�帰 ���� �ϴÿ� ������ ��"};

    char season[4][10]={"��", "����", "����", "�ܿ�"};

    int i, j;
    int size = sizeof(song) / sizeof(song[0]);

    //printf("ã���� �ϴ� ������ �Է� => ");
    //gets(season);

    for(i=0; i<4; i++)
    {
        printf("<< %s�� �� �뷡 >>\n", season[i]);
        for(j=0; j<size; j++)
        {
            if(strstr(song[j], season[i]) != NULL)
            {
                puts(song[j]);
            }
        }
        puts("");
    }

    return 0;
}
