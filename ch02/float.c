#include <stdio.h>

int main()
{
    int i=0;
    float num=0;

    for(i=0; i<30; i++)
    {
        num=num + 0.1;
    }
    printf("0.1을 30번 더하면 : %f\n", num);

    num=0;
    for(i=0; i<50; i++)
    {
        num=num + 0.1;
    }
    printf("0.1을 50번 더하면 : %f\n", num);

    return 0;
}
