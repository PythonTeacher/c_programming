#include <stdio.h>

int main()
{
    double total = 365.2422;    // �ϱ���
    int day, hour, min, sec;

    day = (int)total;       // 365��
    total = total - day;    // 0.2422
    total = total * 24;     // 5.8128

    hour = (int)total;      // 5�ð�
    total = total - hour;   // 0.8128
    total = total * 60;     // 48.768

    min = (int)total;       // 48��
    total = total - min;    // 0.768
    total = total * 60;     // 46.08

    sec = (int)total;       // 46��

    printf("1���� %d�� %d�ð� %d�� %d�� �Դϴ�\n", \
           day, hour, min, sec);
    return 0;
}
