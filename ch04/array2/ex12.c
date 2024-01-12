#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char word[SIZE];
    char result[SIZE];
    int i, len;
    char ch;

    printf("단어를 입력하세요 => ");
    gets(word);     // apple

    // '_' 문자 출력
    len = strlen(word);

    for(i=0; i<len; i++)
    {
        result[i] = '_';
        printf("%c ", result[i]);
    }
    result[i] = '\0';

    // 체크 로직 구현
    while(1)
    {
        printf("알파벳 입력 => ");
        //fflush(stdin);
        while((ch = getchar()) == '\n');
        //ch = getchar(); // a

        for(i=0; i<len; i++)
        {
            if(word[i] == ch)
            {
                result[i] = ch;     // _ -> a
            }
            printf("%c ", result[i]);
        }

        // 정답체크 로직
        if(strcmp(word, result) == 0)
        {
            printf("정답입니다\n");
            break;
        }
    }

    return 0;
}
