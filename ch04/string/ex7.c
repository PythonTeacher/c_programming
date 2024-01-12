#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

int main()
{
    char str[BUF_SIZE];
    char ch;
    char *p;
    int cnt=0;

	printf("문자열 입력 => ");
	gets(str);

	printf("찾고자 하는 문자 입력 => ");
	scanf("%c", &ch);

    p = strchr(str, ch);
    while(p != NULL)
    {
        printf("found at :%d\n", p - str);
        cnt++;
        p = strchr(p+1, ch);
    }

    printf("%c : %d개\n", ch, cnt);

    return 0;
}
