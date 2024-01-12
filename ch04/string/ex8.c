#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

int main()
{
    char str[BUF_SIZE];
    char target[BUF_SIZE];
	int cnt=0;
	char *p;

	printf("문자열 입력 => ");
	gets(str);

	printf("찾고자 하는 문자열 입력 => ");
	gets(target);

    p = strstr(str, target);
    while(p != NULL)
    {
        printf("found at : %d\n", p - str);
        cnt++;
        p = strstr(p+1, target);
    }

	printf("%s : %d개\n", target, cnt);

    return 0;
}
