#include <stdio.h>

//#define ERROR

int main()
{
    #if defined(DEBUG)
        puts("ex2. �ַܼ� ����ϱ�111");
    #elif defined(ERROR)
        puts("ex2. �ַܼ� ����ϱ�222");
        FILE *fp = fopen("log.txt", "w");
        fputs("ex2. ���Ϸ� ����ϱ�", fp);
        fclose(fp);
    #else
        puts("���� �α׷����Դϴ�");
    #endif // LOG_LEVEL
    return 0;
}


