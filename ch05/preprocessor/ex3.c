#include <stdio.h>

//#define ERROR

int main()
{
    #ifdef DEBUG
        puts("ex3. �ַܼ� ����ϱ�111");
    #elif defined(ERROR)
        puts("ex3. �ַܼ� ����ϱ�222");
        FILE *fp = fopen("log.txt", "w");
        fputs("ex3. ���Ϸ� ����ϱ�", fp);
        fclose(fp);
    #else
        puts("���� �α׷����Դϴ�");
    #endif // LOG_LEVEL

    printf("[%d] ���� : %s, �ð� : %s, ���ϸ� : %s, �Լ��� : %s\n",
           __LINE__, __DATE__, __TIME__, __FILE__ , __func__ );

    return 0;
}


