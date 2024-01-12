#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // 비밀번호 작성규칙 : 영문 + 숫자 + 특수문자 포함 8자리 이상
    // 동일문자 3자 이상 연속 입력 불가 (예: 111, aaa)
    // 일련번호 4자 이상 연속 입력 불가 (예: 1234, 4321)

	char pwd[50];
    int alpha_flag=0;
    int num_flag=0;
    int special_flag=0;
    int len, i;

    printf("비밀번호를 입력하세요 : ");
    gets(pwd);

    len = strlen(pwd);

    if(len < 8)
    {
        printf("8자리 이상 입력하세요\n");
        return 0;
    }

    for(i=0; i<len; i++)
    {
        if(isdigit(pwd[i]))
            num_flag = 1;
        else if(isalpha(pwd[i]))
            alpha_flag = 1;
        else if(!isalnum(pwd[i]))
            special_flag = 1;
    }

    // 동일문자 3자 이상 연속불가

    if(!num_flag || !alpha_flag || !special_flag)
        printf("비밀번호에 숫자, 영문자, 특수문자를 포함해 주세요\n");
    else
        printf("비밀번호 생성 성공\n");

	return 0;

}
