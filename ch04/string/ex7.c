#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

int main()
{
    char str[BUF_SIZE];
    char ch;
    char *p;
    int cnt=0;

	printf("���ڿ� �Է� => ");
	gets(str);

	printf("ã���� �ϴ� ���� �Է� => ");
	scanf("%c", &ch);

    p = strchr(str, ch);
    while(p != NULL)
    {
        printf("found at :%d\n", p - str);
        cnt++;
        p = strchr(p+1, ch);
    }

    printf("%c : %d��\n", ch, cnt);

    return 0;
}
