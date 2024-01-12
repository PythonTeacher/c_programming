#include <stdio.h>

#define SIZE 3

int main()
{
    int array[SIZE][SIZE]={0};
    int i, j;

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if(i == j)
                array[i][j] = 1;
        }
    }

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%3d", array[i][j]);
        }
        puts("");
    }

    return 0;
}
