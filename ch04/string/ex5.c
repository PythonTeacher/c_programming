#include <stdio.h>
#include <string.h>

int main()
{
    //          012345678901234
    char *sp = "crazyouiaboutam";
    char str[20];

    strncat(str, sp+7, 1);      // i
    strcat(str, " ");

    strncat(str, sp+13, 2);      // am
    strcat(str, " ");

    strncat(str, sp, 5);        // crazy
    strcat(str, " ");

    strncat(str, sp+8, 5);      // about
    strcat(str, " ");

    strncat(str, sp+4, 3);      // you

    puts(str);

    return 0;
}
