#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char word[SIZE];
    char result[SIZE];
    int i, len;
    char ch, flag=0;

    printf("단어를 입력하세요 => ");
    gets(word);

    len = strlen(word);
    for(i=0; i<len; i++)
    {
        result[i] = '_';
        printf("%c ", result[i]);
    }
    printf("\n");

    while(1)
    {
        flag = 0;
        printf("\n알파벳 입력 => ");
        fflush(stdin);
        ch = getchar();

        for(i=0; i<len; i++)
        {
            if(word[i] == ch)
            {
                result[i] = ch;
            }
            printf("%c ", result[i]);
        }

        for(i=0; i<len; i++)
        {
            if(result[i] == '_')
            {
                flag = 1;
                break;
            }
        }

        printf("\n");

        if(!flag)
        {
            printf("\n정답입니다!!");
            break;
        }
    }

    return 0;
}
