#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    time_t now;
    struct tm t;
    char buff[100];

    printf("���� ��¥ : %s, ���ϸ� : %s\n", __DATE__, __FILE__);

    printf("[%d����] �ݺ��� ���� : %s\n", __LINE__, __TIME__);

    for(i=0; i>=0; i++);

    time(&now);             // ���� ǥ�ؽð� ��ȯ

    t = *localtime(&now);    // UTC�� ���� �ð����� ��ȯ

    sprintf(buff, "%d/%02d/%02d %02d:%02d:%02d",
            t.tm_year+1900, t.tm_mon+1, t.tm_mday,
            t.tm_hour, t.tm_min, t.tm_sec);

    printf("[%d����] �ݺ��� �� : %s\n", __LINE__, buff);

    return 0;
}
