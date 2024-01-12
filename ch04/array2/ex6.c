#include <stdio.h>
#include <string.h>

int main()
{
    char ori[100];
    char copy[100];
    int i, len;

    printf("문자열을 입력하세요 => ");
    gets(ori);

    // 첫번째 방식
    for(i=0; ori[i] != '\0'; i++)
    {
        copy[i] = ori[i];
    }
    copy[i] = '\0';

    len = strlen(ori);

    // 두번째 방식
    for(i=0; i<=len; i++)
    {
        copy[i] = ori[i];
    }

    printf("복사된 문자열 출력 => ");
    puts(copy);

    return 0;
}
