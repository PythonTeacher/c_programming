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
        printf("<< [%d]번째 도서 정보 입력 >>\n", i+1);

        printf("도서명 입력 => ");
        book[i].title = makeString();

        printf("저자명 입력 => ");
        book[i].author = makeString();

        printf("출판사 입력 => ");
        book[i].publisher = makeString();

        printf("가격 입력 => ");
        scanf("%d", &book[i].price);

        printf("출판일 입력 => ");
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

    // 오름차순 정렬
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
        printf("<< [%d]번째 도서 정보 출력 >>\n", i+1);
        printBook(book[i]);
    }
}

void printBook(Book book)
{
    printf("도서명 : %s\n", book.title);
    printf("저자명 : %s\n", book.author);
    printf("출판사 : %s\n", book.publisher);
    printf("가  격 : %d원\n", book.price);
    printf("출판일 : %d/%2d/%2d\n", book.pubDay.year,
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
