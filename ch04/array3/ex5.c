#include <stdio.h>

#define ROW 6
#define COL 10

int main()
{
    char member[ROW][COL]={"���缮","�ڸ��","������","������","��ȫö","����"};
    int i;

    puts("<<���ѵ��� ��� ���>>");
    for(i=0; i<ROW; i++)
    {
        puts(member[i]);
    }

    return 0;
}
