#include <stdio.h>
#include <string.h>

int main()
{
	char	name[200];
    char    message[100];

	printf("�̸� : ");
	gets(name);

    printf("�޽��� : ");
    gets(message);

    strcat(name, " ");
    strcat(name, message);

	printf("\n��¸޽��� : %s\n", name);

	return 0;

}
