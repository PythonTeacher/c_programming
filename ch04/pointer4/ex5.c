#include <stdio.h>
#include <string.h>

int main()
{
    char *ideal[5] = {"���μ�", "���¿�", "������",
                      "�ݸ��۽�", "���׵�Ʈ �Ĺ���ġ"};
    int i, j;
    char *temp;

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(ideal[i], ideal[j]) > 0)
            {
                temp = ideal[i];
                ideal[i] = ideal[j];
                ideal[j] = temp;
            }
        }
    }

    puts("<< �����ϴ� �ι� >>");
    for(i=0; i<5; i++)
        puts(ideal[i]);

    return 0;
}
