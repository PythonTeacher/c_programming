#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100];
    int len, i;

    printf("문자열을 입력하세요 => ");
    gets(str);
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("문자열 출력 => ");
    puts(str);

	return 0;

}
