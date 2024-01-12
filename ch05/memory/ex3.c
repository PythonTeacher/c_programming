#include <stdio.h>
#include <stdlib.h>         // malloc, free
#include <string.h>         // strlen, strcpy

int main()
{
    char *song[5];         // �뷡 ������ ��� ������ �迭
    char temp[100];        // �ӽ� �迭
    int i;

    for(i=0; i<5; i++)
    {
        printf("%d��° �뷡���� �Է� => ", i+1);
        gets(temp);

        song[i] = (char *)malloc(strlen(temp) + 1);
        if(song[i] == NULL)
        {
            puts("Out of memory!!");
            exit(1);
        }
        strcpy(song[i], temp);
    }

    for(i=0; i<5; i++)
    {
        puts(song[i]);
    }

    for(i=0; i<5; i++)
    {
        free(song[i]);
        song[i] = NULL;
    }

    return 0;
}
