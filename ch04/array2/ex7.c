#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char temp[100];

    printf("���ڿ�1 �Է� : ");
    gets(str1);

    printf("���ڿ�2 �Է� : ");
    gets(str2);

    // ���ڿ� ��ȯ
    //temp = str1;
    //str1 = str2;
    //str2 = temp;
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    puts("\n�ٲ� ���ڿ� ���");
    printf("���ڿ�1 : %s\n", str1);
    printf("���ڿ�2 : %s\n", str2);

    return 0;
}
