#include <stdio.h>
#include <string.h>

#define USR_ID  "test"
#define USR_PWD "test123"

int main()
{
	char id[100];
    char pwd[100];

	printf("�α��� ID�� �Է��ϼ��� => ");
	gets(id);

    if(strcmp(id, "") == 0)
    {
        printf("ID�� �Է��ϼ���\n");
        return 0;
    }

	printf("\n�α��� PWD�� �Է��ϼ��� => ");
	gets(pwd);

    if(!strcmp(pwd, ""))
    {
        printf("PWD�� �Է��ϼ���\n");
        return 0;
    }

    if(strcmp(USR_ID, id) == 0 && strcmp(USR_PWD, pwd) == 0)
    {
        printf("%s�� ȯ���մϴ�!!\n", id);
    }
    else
    {
        printf("����� ID �Ǵ� ��й�ȣ �����Դϴ�!!\n");
        printf("�Է��� ID : %s, �Է��� PWD: %s\n", id, pwd);
    }

	return 0;

}
