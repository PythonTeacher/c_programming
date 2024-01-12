#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

int main()
{
    char phone[BUF_SIZE];
    char copy[BUF_SIZE];
    char *p;

    printf("휴대폰 번호 입력 => ");
    gets(phone);

    strncpy(copy, phone, sizeof(copy));

    puts("<<휴대폰 번호 출력>>");

    p = strtok(copy, "-) ");

    while(p != NULL)
    {
        puts(p);
        p = strtok(NULL, "-) ");
    }

    puts(phone);

    return 0;
}
