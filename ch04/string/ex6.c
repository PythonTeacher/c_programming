#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

int main()
{
    char addr[BUF_SIZE];
    char school[BUF_SIZE];
    char info[BUF_SIZE];
    int len;

    puts("<< 나는 누구냐? >>");

    snprintf(addr, BUF_SIZE, "사는 곳 : [%d-%d] %s시 %s구 %s동 %s번지",
             425, 840, "안산", "단원", "와", "27-1");

    puts(addr);

    snprintf(school, BUF_SIZE, "학교명 : %s, 학번 : %d, 이름 : %s",
             "디미고", 1401, "조인성");

    puts(school);

    // 배열 하나로 합치기
    // 문자열의 길이가 리턴됨
    len = snprintf(info, BUF_SIZE, "사는 곳 : [%d-%d] %s시 %s구 %s동 %s번지",
                   425, 840, "안산", "단원", "와", "27-1");

    snprintf(info+len, BUF_SIZE, "\n학교명 : %s, 학번 : %d, 이름 : %s",
             "디미고", 1401, "조인성");

    puts(info);





    return 0;
}
