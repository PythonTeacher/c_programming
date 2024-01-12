#include <stdio.h>
#include <stdlib.h>     // malloc, free
#include <string.h>     // strlen, strcpy
#include "../struct/book.h"

#define SIZE    2

int main()
{
    Book book[SIZE];

    FILE *fp = freopen("book_input.txt", "r", stdin);
    if(fp == NULL)
    {
        printf("file does not exist!!!");
        return 1;
    }

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
        //printf("<< [%d]��° ���� ���� �Է� >>\n", i+1);

        //printf("������ �Է� => ");
        book[i].title = makeString();

        //printf("���ڸ� �Է� => ");
        book[i].author = makeString();

        //printf("���ǻ� �Է� => ");
        book[i].publisher = makeString();

        //printf("���� �Է� => ");
        scanf("%d", &book[i].price);

        //printf("������ �Է� => ");
        scanf("%d %d %d", &book[i].pubDay.year,
                          &book[i].pubDay.month,
                          &book[i].pubDay.day);

        while(getchar() != '\n');
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

void outputBook(Book *book)
{
    int i, j;
    Book temp;

    // �������� ����
    for(i=0; i<SIZE-1; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            if(strcmp(book[i].title, book[j].title) > 0)
            {
                temp = book[i];
                book[i] = book[j];
                book[j] = temp;
            }
        }
    }

    for(i=0; i<SIZE; i++)
    {
        printf("<< [%d]��° ���� ���� ��� >>\n", i+1);
        printBook(book[i]);
    }
}

void printBook(Book book)
{
    printf("������ : %s\n", book.title);
    printf("���ڸ� : %s\n", book.author);
    printf("���ǻ� : %s\n", book.publisher);
    printf("��  �� : %d��\n", book.price);
    printf("������ : %d/%2d/%2d\n", book.pubDay.year,
                                    book.pubDay.month,
                                    book.pubDay.day);
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
