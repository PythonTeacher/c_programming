#include <stdio.h>

int main()
{
    int i=0;
    float num=0;

    for(i=0; i<30; i++)
    {
        num=num + 0.1;
    }
    printf("0.1�� 30�� ���ϸ� : %f\n", num);

    num=0;
    for(i=0; i<50; i++)
    {
        num=num + 0.1;
    }
    printf("0.1�� 50�� ���ϸ� : %f\n", num);

    return 0;
}
