#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i, count;

    if(argc < 3)
    {
        puts("���α׷� ���� �����Դϴ�.");
        puts("���� : �������ϸ� ���ڿ� �ݺ�Ƚ��");
        return 1;
    }

    count = atoi(argv[2]);      // "3" -> 3

    for(i=0; i<count; i++)
        puts(argv[1]);

    return 0;
}
