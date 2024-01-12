#include <stdio.h>
#include <stdlib.h>     // malloc, free
#include <string.h>     // strlen, strcpy

struct book
{
    char *title;        // ������
    char *author;       // ���ڸ�
    char *publisher;    // ���ǻ�
    int price;          // ����
};

char *makeString();

int main()
{
    struct book book;

    puts("<< ���� ���� �Է� >>");
    printf("������ �Է� => ");
    //gets(book.title);
    book.title = makeString();

    printf("���ڸ� �Է� => ");
    book.author = makeString();

    printf("���ǻ� �Է� => ");
    book.publisher = makeString();

    printf("���� �Է� => ");
    scanf("%d", &book.price);

    puts("\n<< ���� ���� ��� >>");
    printf("������ : %s\n", book.title);
    printf("���ڸ� : %s\n", book.author);
    printf("���ǻ� : %s\n", book.publisher);
    printf("��  �� : %d\n", book.price);

    free(book.title);
    free(book.author);
    free(book.publisher);

    return 0;
}

char *makeString()
{
    char temp[100];
    gets(temp);

    char *p = (char *)malloc(strlen(temp) + 1);
    if(p == NULL)
    {
        puts("Out of Memory!!");
        exit(1);
    }
    strcpy(p, temp);
    return p;
}
















