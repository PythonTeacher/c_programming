#include <stdio.h>
#include <string.h>

int main()
{
    char member[6][10];
    int age[6];
    char tempStr[10];
    int i, j, temp;

    for(i=0; i<6; i++)
    {
        printf("%d��° ������� �Է��ϼ��� => ", i+1);
        gets(member[i]);

        printf("%s�� ���̸� �Է��ϼ��� => ", member[i]);
        scanf("%d", &age[i]);
        while(getchar() != '\n');       // ����Ű �����ֱ�

        printf("\n");
    }

    printf("\n<< ���� ���� ���� �� >>\n");
    printf("--------------------------\n");
    printf("����� \t ����\n");
    printf("--------------------------\n");
    for(i=0; i<6; i++)
    {
        printf("%s \t %d��\n", member[i], age[i]);
    }
    printf("--------------------------\n");

    // ���� ���� (��������)
    for(i=1; i<6; i++)
    {
        for(j=0; j<6-i; j++)
        {
            if(age[j] < age[j+1])
            {
                // ���̼� ����
                temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;

                // �̸� ����
                strcpy(tempStr, member[j]);
                strcpy(member[j], member[j+1]);
                strcpy(member[j+1], tempStr);
            }
        }
    }

    printf("\n<< ���� ���� ���� �� >>\n");
    printf("--------------------------\n");
    printf("����� \t ����\n");
    printf("--------------------------\n");
    for(i=0; i<6; i++)
    {
        printf("%s \t %d��\n", member[i], age[i]);
    }
    printf("--------------------------\n");

    return 0;
}
