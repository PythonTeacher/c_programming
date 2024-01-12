#include <stdio.h>
#include <stdlib.h>         // malloc, free
#include <string.h>         // strlen, strcpy

int main()
{
    char *song[5];         // 노래 제목을 담는 포인터 배열
    char temp[100];        // 임시 배열
    int i;

    for(i=0; i<5; i++)
    {
        printf("%d번째 노래제목 입력 => ", i+1);
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
