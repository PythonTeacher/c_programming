#include <stdio.h>

int main()
{
    int i=0;        // �ε��� ����

    // while
    while(i < 10)
    {
        printf("[%d]�� �����!!!\n", i);
        i++;
    }

    printf("\n");

    i=0;
    // do~while
    do
    {
        printf("[%d]�� �����!!!\n", i);
        i++;
    } while(i < 10);


    return 0;
}
