#include <stdio.h>

int main()
{
    char str[100];
    int i=0;

    printf("���ڿ��� �Է��ϼ��� => ");
    gets(str);

    /*while(str[i] != '\0')
    {
        i++;
    }*/

    for(i=0; str[i] != '\0'; i++);

    printf("���ڿ��� ���� : %d\n", i);

    return 0;
}
