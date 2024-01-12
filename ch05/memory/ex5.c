#include <stdio.h>
#include <string.h>

int main()
{
    char member[5][20] = {"박초롱", "윤보미", "정은지", "손나은", "김남주"};
    int i;

    puts("<< 에이핑크 멤버 >>");

    for(i=0; i<5; i++)
    {
        printf("%d번째 멤버명 => %s, ", i+1, member[i]);

        memset(member[i]+2, 'O', 2);
        //member[i][4] = '\0';
        memset(member[i]+4, ' ', 2);
        printf("실명 숨기기 => %s\n", member[i]);
    }

    return 0;
}
