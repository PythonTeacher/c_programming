#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *p = array;
    int i;

    /*for(i=0; i<5; i++)
    {
        printf("%d\n", p[i]++);
    }*/

    for(i=0; i<5; i++)
    {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
