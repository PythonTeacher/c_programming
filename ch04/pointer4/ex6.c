#include <stdio.h>

void sort(char **ideal);
void print(char **ideal);

int main()
{
    char *ideal[5] = {"���μ�", "���¿�", "������",
                      "�ݸ��۽�", "���׵�Ʈ �Ĺ���ġ"};

    sort(ideal);        // �����͹迭���� ���ڷ� �ѱ��

    print(ideal);

    return 0;
}

// int a[10];
// func(a);
// void func(int *p)        // int p[], int p[0], p[10000]
void sort(char **ideal)     // ���������ͺ����� �޴´�!!!
{
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
}

void print(char **ideal)
{
    int i;
    puts("<< �����ϴ� �ι� >>");
    for(i=0; i<5; i++)
        puts(ideal[i]);
}










