#include <stdio.h>

int main()
{
    FILE *ofp;
    char buf[100];

    if((ofp = fopen("output.txt", "a")) == NULL)
    {
        printf("output.txt 파일 open error\n");
        return 1;
    }

    puts("<< 좋아하는 TV 프로그램 입력 >>\n");

    while(fgets(buf, sizeof(buf), stdin) != NULL)
    {
        fputs(buf, ofp);
        printf("파일 출력 완료 : %s\n", buf);
    }

    fclose(ofp);
    return 0;
}
