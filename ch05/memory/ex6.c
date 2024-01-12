#include <stdio.h>
#include <string.h>

int main()
{
    char member[5][20] = {"박초롱", "윤보미", "정은지", "손나은", "김남주"};
    char copy[5][20];
    int i;

    // 배열 전체 복사 (memcpy 이용)
    memcpy(copy, member, sizeof(member));

    puts("<< 에이핑크 멤버 >>");
    for(i=0; i<5; i++)
    {
        printf("%d번째 멤버명 => %s\n", i+1, copy[i]);
    }
    return 0;
}
