#include <stdio.h>

int main()
{
    int num[5]={5,3,4,1,2};
    int i, tot=0;
    int size;

    size = sizeof(num) / sizeof(num[0]);

    for(i=0; i<size; i++)
    {
        printf("[%d]��° �� : %d\n", i, num[i]);
        tot += num[i];
    }

    printf("�迭 ����� �� ���� %d �Դϴ�.\n", tot);

    return 0;
}
