#include <stdio.h>

int main()
{
    int num[5]={5,3,4,1,2};
    int i, tot=0;
    int size;
    int j, temp;

    size = sizeof(num) / sizeof(num[0]);

    for(i=0; i<size; i++)
    {
        printf("[%d]��° �� : %d\n", i, num[i]);
        tot += num[i];
    }

    printf("�迭 ����� �� ���� %d �Դϴ�.\n", tot);

    // ���� ���� ��������
    for(i=1; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("\n�������� ���� �� ���\n");
    for(i=0; i<size; i++)
    {
        printf("[%d]��° �� : %d\n", i, num[i]);
    }

    // ���� ���� ��������
    for(i=1; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(num[j] < num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("\n�������� ���� �� ���\n");
    for(i=0; i<size; i++)
    {
        printf("[%d]��° �� : %d\n", i, num[i]);
    }

    return 0;
}
