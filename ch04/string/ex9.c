#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

int main()
{
    char phone[BUF_SIZE];
    char copy[BUF_SIZE];
    char *p;

    printf("�޴��� ��ȣ �Է� => ");
    gets(phone);

    strncpy(copy, phone, sizeof(copy));

    puts("<<�޴��� ��ȣ ���>>");

    p = strtok(copy, "-) ");

    while(p != NULL)
    {
        puts(p);
        p = strtok(NULL, "-) ");
    }

    puts(phone);

    return 0;
}
