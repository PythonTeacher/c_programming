#include <stdio.h>
#include <string.h>

int main()
{
    char *ideal[5] = {"조인성", "조승우", "조형기",
                      "콜린퍼스", "베네딕트 컴버배치"};
    int i, j;
    char *temp;

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(ideal[i], ideal[j]) > 0)
            {
                temp = ideal[i];
                ideal[i] = ideal[j];
                ideal[j] = temp;
            }
        }
    }

    puts("<< 좋아하는 인물 >>");
    for(i=0; i<5; i++)
        puts(ideal[i]);

    return 0;
}
