#include <stdio.h>
#include <string.h>

#define USR_ID  "test"
#define USR_PWD "test123"

int main()
{
	char id[100];
    char pwd[100];

	printf("로그인 ID를 입력하세요 => ");
	gets(id);

    if(strcmp(id, "") == 0)
    {
        printf("ID를 입력하세요\n");
        return 0;
    }

	printf("\n로그인 PWD를 입력하세요 => ");
	gets(pwd);

    if(!strcmp(pwd, ""))
    {
        printf("PWD를 입력하세요\n");
        return 0;
    }

    if(strcmp(USR_ID, id) == 0 && strcmp(USR_PWD, pwd) == 0)
    {
        printf("%s님 환영합니다!!\n", id);
    }
    else
    {
        printf("사용자 ID 또는 비밀번호 오류입니다!!\n");
        printf("입력한 ID : %s, 입력한 PWD: %s\n", id, pwd);
    }

	return 0;

}
