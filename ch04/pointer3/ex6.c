#include <stdio.h>

void input(char (*p)[20]);
void input(char (*p)[20]);

int main()
{
    char idol[5][20];

    input(idol);
    output(idol);

    return 0;
}

void input(char (*p)[20])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d¹øÂ° ¸â¹ö´Â?", i+1);
        gets(p[i]);
    }
}

void output(char (*p)[20])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d¹øÂ° ¸â¹ö´Â %s\n", i+1, p[i]);
    }
}
