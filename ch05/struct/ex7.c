#include <stdio.h>
#include <stdlib.h>     // malloc, free
#include <string.h>     // strlen, strcpy
#include "book.h"

int main()
{
    Book book[2];
    int i;

    for(i=0; i<2; i++)
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

        getchar();
        //fflush(stdin);
    }

    for(i=0; i<2; i++)
    {
        printf("<< [%d]번째 도서 정보 출력 >>\n", i+1);
        printBook(book[i]);
    }

    for(i=0; i<2; i++)
    {
        free(book[i].title);
        free(book[i].author);
        free(book[i].publisher);
    }

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
    puts("\n<< 도서 정보 출력 >>");
    printf("도서명 : %s\n", book.title);
    printf("저자명 : %s\n", book.author);
    printf("출판사 : %s\n", book.publisher);
    printf("가  격 : %d\n", book.price);
    printf("출판일 : %d/%2d/%2d\n", book.pubDay.year,
                                    book.pubDay.month,
                                    book.pubDay.day);
}














