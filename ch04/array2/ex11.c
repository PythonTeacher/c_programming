#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100];
    int len, i;

    printf("���ڿ��� �Է��ϼ��� => ");
    gets(str);
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("���ڿ� ��� => ");
    puts(str);

	return 0;

}
