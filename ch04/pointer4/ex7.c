#include <stdio.h>

int main(int argc, char **argv)     // char *argv[]
{
    int i;

    for(i=1; i < argc; i++)
        puts(argv[i]);

    puts("");

    i=1;
    while(argv[i] != NULL)
    {
        puts(argv[i++]);
    }

    puts("");

    while(*(argv+1) != NULL)
    {
        puts(*(argv+1));
        argv++;
    }

    return 0;
}
