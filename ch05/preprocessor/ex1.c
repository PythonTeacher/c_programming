#include <stdio.h>

#define LOG_LEVEL   2

int main()
{
    #if LOG_LEVEL == 1
        puts("ex1. �ַܼ� ����ϱ�111");
    #elif LOG_LEVEL == 2
        puts("ex1. �ַܼ� ����ϱ�222");
        FILE *fp = fopen("log.txt", "w");
        fputs("ex1. ���Ϸ� ����ϱ�", fp);
        fclose(fp);
    #else
        puts("���� �α׷����Դϴ�");
    #endif // LOG_LEVEL
    return 0;
}


