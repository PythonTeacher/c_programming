#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

int main()
{
    char str[BUF_SIZE];
    char target[BUF_SIZE];
	int cnt=0;
	char *p;

	printf("���ڿ� �Է� => ");
	gets(str);

	printf("ã���� �ϴ� ���ڿ� �Է� => ");
	gets(target);

    p = strstr(str, target);
    while(p != NULL)
    {
        printf("found at : %d\n", p - str);
        cnt++;
        p = strstr(p+1, target);
    }

	printf("%s : %d��\n", target, cnt);

    return 0;
}
