#include <stdio.h>
#include <string.h>

int main()
{
	char	name[200];
    char    message[100];

	printf("이름 : ");
	gets(name);

    printf("메시지 : ");
    gets(message);

    strcat(name, " ");
    strcat(name, message);

	printf("\n출력메시지 : %s\n", name);

	return 0;

}
