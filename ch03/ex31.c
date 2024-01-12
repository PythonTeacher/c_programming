#include <stdio.h>

int main()
{
    int i, j, k;

    for(i=0; i<2; i++)
    {
        for(j=1; j<=9; j++)
        {
            for(k=2+i*4; k<=5+i*4; k++)
            {
                printf("%d * %d = %2d\t", k, j, k*j);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
