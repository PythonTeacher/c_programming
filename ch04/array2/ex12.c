#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char word[SIZE];
    char result[SIZE];
    int i, len;
    char ch;

    printf("�ܾ �Է��ϼ��� => ");
    gets(word);     // apple

    // '_' ���� ���
    len = strlen(word);

    for(i=0; i<len; i++)
    {
        result[i] = '_';
        printf("%c ", result[i]);
    }
    result[i] = '\0';

    // üũ ���� ����
    while(1)
    {
        printf("���ĺ� �Է� => ");
        //fflush(stdin);
        while((ch = getchar()) == '\n');
        //ch = getchar(); // a

        for(i=0; i<len; i++)
        {
            if(word[i] == ch)
            {
                result[i] = ch;     // _ -> a
            }
            printf("%c ", result[i]);
        }

        // ����üũ ����
        if(strcmp(word, result) == 0)
        {
            printf("�����Դϴ�\n");
            break;
        }
    }

    return 0;
}
