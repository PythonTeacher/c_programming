#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100];
    int len, i, flag=1;

    printf("���ڸ� �Է��ϼ��� : ");
    gets(str);

    // �������� üũ
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
        printf("%s�� �����Դϴ�\n", str);
    else
        printf("%s�� ���ڰ� �ƴմϴ�\n", str);

	return 0;

}
