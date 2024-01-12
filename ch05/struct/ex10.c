#include <stdio.h>
#include <stdlib.h>     // malloc, free
#include <string.h>     // strlen, strcpy
#include "book_upgrade.h"

int main()
{
    int num;

    printf("���� ���� �Է� => ");
    scanf("%d", &num);
    getchar();                 // ���๮�� ó��

    Book *book = (Book *)malloc(num * sizeof(Book));

    inputBook(book, num);      // �������� �Է�

    outputBook(book, num);     // �������� ���

    freeBook(book, num);       // �޸� ����

    return 0;
}

void inputBook(Book *book, int num)
{
    int i;

    for(i=0; i<num; i++)
    {
        printf("<< [%d]��° ���� ���� �Է� >>\n", i+1);

        printf("������ �Է� => ");
        book[i].title = makeString();

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

void outputBook(Book *book, int num)
{
    int i, j;
    Book temp;

    // �������� ����
    for(i=0; i<num-1; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(strcmp(book[i].title, book[j].title) > 0)
            {
                temp = book[i];
                book[i] = book[j];
                book[j] = temp;
            }
        }
    }

    for(i=0; i<num; i++)
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

void freeBook(Book *book, int num)
{
    int i;
    for(i=0; i<num; i++)
    {
        free(book[i].title);
        free(book[i].author);
        free(book[i].publisher);
    }
    free(book);
}
