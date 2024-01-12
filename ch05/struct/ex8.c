#include <stdio.h>
#include <stdlib.h>     // malloc, free
#include <string.h>     // strlen, strcpy
#include "book.h"

#define SIZE    2

int main()
{
    Book book[SIZE];

    inputBook(book);

    outputBook(book);

    freeBook(book);

    return 0;
}

void inputBook(Book *book)
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("<< [%d]��° ���� ���� �Է� >>\n", i+1);
        printf("������ �Է� => ");
        book[i].title = makeString();       // �迭ǥ��
        //(book+i)->title = makeString();     // ������ǥ��

        printf("���ڸ� �Է� => ");
        book[i].author = makeString();

        printf("���ǻ� �Է� => ");
        book[i].publisher = makeString();

        printf("���� �Է� => ");
        scanf("%d", &book[i].price);

        printf("������ �Է� => ");
        scanf("%d %d %d", &book[i].pubDay.year,
                          &book[i].pubDay.month,
                          &book[i].pubDay.day);

        getchar();
        //fflush(stdin);
    }
}

void outputBook(Book *book)
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("<< [%d]��° ���� ���� ��� >>\n", i+1);
        printBook(book[i]);
    }
}

void freeBook(Book *book)
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        free(book[i].title);
        free(book[i].author);
        free(book[i].publisher);
    }
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














