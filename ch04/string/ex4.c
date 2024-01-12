#include <stdio.h>
#include <string.h>

int main()
{
    char name[][10] ={"조조", "유비", "관우", "장비", "제갈량", "조운"};
    char lastName[10];
    int i, len, flag=0, size;

    printf("찾고자 하는 성 입력 => ");
    gets(lastName);

    size = sizeof(name) / sizeof(name[0]);

    len = strlen(lastName);     // 조:2, 제갈:4

    for(i=0; i<size; i++)
    {
        if(strncmp(name[i], lastName, len) == 0)
        {
            puts(name[i]);
            flag=1;
        }
    }

    if(!flag)
        printf("%s씨 성을 갖는 사람 없습니다!!\n", lastName);

    return 0;
}
