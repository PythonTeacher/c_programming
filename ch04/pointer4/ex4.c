#include <stdio.h>

int main()
{
    char *ideal[5] = {"���μ�", "���¿�", "����",
                      "�ݸ��۽�", "���׵�Ʈ �Ĺ���ġ"};

    int i;

    puts("<< �����ϴ� �ι� >>");

    for(i=0; i<5; i++)
    {
        puts(ideal[i]);
    }

    return 0;
}
