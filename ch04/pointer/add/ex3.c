#include <stdio.h>
#include <string.h>

char str[100];

void input();
void calc(int *pCharCnt, int *pWordCnt);
void output(int charCnt, int wordCnt);

int main()
{
    int charCnt, wordCnt;

    input();
    calc(&charCnt, &wordCnt);
    output(charCnt, wordCnt);

    return 0;
}

void input()
{
    printf("문자열 입력 : ");
    gets(str);
}

void calc(int *pCharCnt, int *pWordCnt)
{
    int len = strlen(str);
    int i, charCnt=0, wordCnt=0;

    for(i=0; i<len; i++)
    {
        if(str[i] == ' ')
            wordCnt++;
        else
            charCnt++;
    }

    // 마지막에 단어수 1증가
    *pCharCnt = charCnt;
    *pWordCnt = ++wordCnt;
}

void output(int charCnt, int wordCnt)
{
    printf("[%s]의 문자수 : %d개, 단어수 : %d개 입니다\n", str, charCnt, wordCnt);
}
