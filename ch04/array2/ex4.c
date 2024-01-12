#include <stdio.h>

int main()
{
    char str[100];
    int i=0;

    printf("문자열을 입력하세요 => ");
    gets(str);

    /*while(str[i] != '\0')
    {
        i++;
    }*/

    for(i=0; str[i] != '\0'; i++);

    printf("문자열의 길이 : %d\n", i);

    return 0;
}
