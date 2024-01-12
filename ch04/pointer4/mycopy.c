#include <stdio.h>

int main(int argc, char **argv)     // char *argv[]
{
    int i;

    if(argc < 3)
    {
        puts("명령어 틀렸다!!! 잘 쓰시오..");
        return 1;
    }

    for(i=0; i<argc; i++)
        puts(argv[i]);

    return 0;
}
