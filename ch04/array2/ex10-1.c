#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // ��й�ȣ �ۼ���Ģ : ���� + ���� + Ư������ ���� 8�ڸ� �̻�
    // ���Ϲ��� 3�� �̻� ���� �Է� �Ұ� (��: 111, aaa)
    // �Ϸù�ȣ 4�� �̻� ���� �Է� �Ұ� (��: 1234, 4321)

	char pwd[50];
    int alpha_flag=0;
    int num_flag=0;
    int special_flag=0;
    int len, i;

    printf("��й�ȣ�� �Է��ϼ��� : ");
    gets(pwd);

    len = strlen(pwd);

    if(len < 8)
    {
        printf("8�ڸ� �̻� �Է��ϼ���\n");
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

    // ���Ϲ��� 3�� �̻� ���ӺҰ�

    if(!num_flag || !alpha_flag || !special_flag)
        printf("��й�ȣ�� ����, ������, Ư�����ڸ� ������ �ּ���\n");
    else
        printf("��й�ȣ ���� ����\n");

	return 0;

}
