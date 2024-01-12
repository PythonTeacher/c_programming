#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf("문장을 입력하세요 => ");
    gets(str);

    printf("거꾸로 출력하면 => ");

    len = strlen(str);  // apple -> 5

    for(i=len-1; i>=0; i--)
    {
        putchar(str[i]);
    }

    return 0;
}
