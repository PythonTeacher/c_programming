#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char temp[100];

    printf("문자열1 입력 : ");
    gets(str1);

    printf("문자열2 입력 : ");
    gets(str2);

    // 문자열 교환
    //temp = str1;
    //str1 = str2;
    //str2 = temp;
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    puts("\n바뀐 문자열 출력");
    printf("문자열1 : %s\n", str1);
    printf("문자열2 : %s\n", str2);

    return 0;
}
