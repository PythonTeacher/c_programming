#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100];
    int len, i, flag=1;

    printf("숫자를 입력하세요 : ");
    gets(str);

    // 숫자인지 체크
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(isdigit(str[i]) == 0)
        {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("%s는 숫자입니다\n", str);
    else
        printf("%s는 숫자가 아닙니다\n", str);

	return 0;

}
