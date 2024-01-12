#include <stdio.h>

int main()
{
    int i=0;        // ÀÎµ¦½º º¯¼ö

    // while
    while(i < 10)
    {
        printf("[%d]Àß »ý°å´Ù!!!\n", i);
        i++;
    }

    printf("\n");

    i=0;
    // do~while
    do
    {
        printf("[%d]Àß »ý°å´Ù!!!\n", i);
        i++;
    } while(i < 10);


    return 0;
}
