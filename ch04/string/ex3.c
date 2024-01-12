#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "나는 바보다!!";

    printf("변경전 문자열 : %s\n", str);

    strncpy(str+5, "천재", 4);

    printf("변경후 문자열 : %s\n", str);

    return 0;
}
