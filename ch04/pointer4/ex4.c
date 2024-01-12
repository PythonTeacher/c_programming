#include <stdio.h>

int main()
{
    char *ideal[5] = {"조인성", "조승우", "조빈",
                      "콜린퍼스", "베네딕트 컴버배치"};

    int i;

    puts("<< 좋아하는 인물 >>");

    for(i=0; i<5; i++)
    {
        puts(ideal[i]);
    }

    return 0;
}
