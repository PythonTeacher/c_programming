#include <stdio.h>

void my_puts1(const char *p);
void my_puts2(const char *p);
void my_puts3(const char *p);

int main()
{
    char str[100];

    printf("���ڿ� �Է� => ");
    gets(str);

    puts("\n<< ���ڿ� ��� >>");
    printf("1. ù��° ��� => ");
    my_puts1(str);      // �迭 ��� (�����)

    printf("2. �ι�° ��� => ");
    my_puts2(str);      // ������ ��� (������)

    printf("3. ����° ��� => ");
    my_puts3(str);      // ������ ������ ���� ������ �� �ִ�!!!

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






