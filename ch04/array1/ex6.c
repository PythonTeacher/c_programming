#include <stdio.h>

int main()
{
    double height[5];
    int size, i, j;
    double temp, tot=0;

    size = sizeof(height) / sizeof(height[0]);

    for(i=0; i<size; i++)
    {
        printf("%d��° �л��� Ű�� �Է��ϼ��� : ", i+1);
        scanf("%lf", &height[i]);
        tot += height[i];
    }

    // ���� ���� ��������
    for(i=1; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(height[j] > height[j+1])
            {
                temp = height[j];
                height[j] = height[j+1];
                height[j+1] = temp;
            }
        }
    }

    printf("\n << ��� ��� >>\n");
    printf("1. Ű ��� : %.1lf\n", tot/size);
    printf("2. ���� ���� Ű : %.1lf\n", height[0]);
    printf("3. ���� ū Ű : %.1lf\n", height[size-1]);

    return 0;
}
