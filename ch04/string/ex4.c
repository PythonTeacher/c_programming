#include <stdio.h>
#include <string.h>

int main()
{
    char name[][10] ={"����", "����", "����", "���", "������", "����"};
    char lastName[10];
    int i, len, flag=0, size;

    printf("ã���� �ϴ� �� �Է� => ");
    gets(lastName);

    size = sizeof(name) / sizeof(name[0]);

    len = strlen(lastName);     // ��:2, ����:4

    for(i=0; i<size; i++)
    {
        if(strncmp(name[i], lastName, len) == 0)
        {
            puts(name[i]);
            flag=1;
        }
    }

    if(!flag)
        printf("%s�� ���� ���� ��� �����ϴ�!!\n", lastName);

    return 0;
}
