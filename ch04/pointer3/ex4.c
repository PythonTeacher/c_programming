#include <stdio.h>

void my_puts1(const char *p);
void my_puts2(const char *p);
void my_puts3(const char *p);

int main()
{
    char str[100];

    printf("문자열 입력 => ");
    gets(str);

    puts("\n<< 문자열 출력 >>");
    printf("1. 첫번째 방식 => ");
    my_puts1(str);      // 배열 방식 (포사배)

    printf("2. 두번째 방식 => ");
    my_puts2(str);      // 포인터 방식 (포사포)

    printf("3. 세번째 방식 => ");
    my_puts3(str);      // 포인터 변수는 값을 변경할 수 있다!!!

    return 0;
}

void my_puts1(const char *p)      // char p[]
{
    int i=0;
    while(p[i] != '\0')
    {
        putchar(p[i]);
        i++;
    }
    printf("\n");
}

void my_puts2(const char *p)      // char p[]
{
    int i=0;
    while(*(p+i) != '\0')
    {
        putchar(*(p+i));
        i++;
    }
    printf("\n");
}

void my_puts3(const char *p)
{
    while(*p != '\0')
    {
        putchar(*p);
        p++;
    }
    printf("\n");
}






