#include <stdio.h>
#include <string.h>

int main()
{
    char member[6][10];
    char temp[10];
    int i, j;

    for(i=0; i<6; i++)
    {
        printf("%d��° ������� �Է��ϼ��� => ", i+1);
        gets(member[i]);
    }

    printf("\n<< ����� ���� ���� �� >>\n");
    for(i=0; i<6; i++)
    {
        puts(member[i]);
    }

    // ���� ���� (��������)
    for(i=1; i<6; i++)
    {
        for(j=0; j<6-i; j++)
        {
            if(strcmp(member[j], member[j+1]) > 0)
            {
                strcpy(temp, member[j]);
                strcpy(member[j], member[j+1]);
                strcpy(member[j+1], temp);
            }
        }
    }

    printf("\n<< ����� ���� ���� �� >>\n");
    for(i=0; i<6; i++)
    {
        puts(member[i]);
    }

    return 0;
}
