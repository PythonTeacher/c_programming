#include <stdio.h>
#include <stdlib.h>     // malloc, free
#include <string.h>     // strlen, strcpy
#include "book.h"

int main()
{
    Book book;

    puts("<< ���� ���� �Է� >>");
    printf("������ �Է� => ");
    book.title = makeString();

    printf("���ڸ� �Է� => ");
    book.author = makeString();

    printf("���ǻ� �Է� => ");
    book.publisher = makeString();

    printf("���� �Է� => ");
    scanf("%d", &book.price);

    printf("������ �Է� => ");
    scanf("%d %d %d", &book.pubDay.year,
                      &book.pubDay.month,
                      &book.pubDay.day);

    printBook(book);

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

void printBook(Book book)
{
    puts("\n<< ���� ���� ��� >>");
    printf("������ : %s\n", book.title);
    printf("���ڸ� : %s\n", book.author);
    printf("���ǻ� : %s\n", book.publisher);
    printf("��  �� : %d\n", book.price);
    printf("������ : %d/%2d/%2d\n", book.pubDay.year,
                                    book.pubDay.month,
                                    book.pubDay.day);
}














