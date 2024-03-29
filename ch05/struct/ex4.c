#include <stdio.h>
#include <stdlib.h>     // malloc, free
#include <string.h>     // strlen, strcpy

struct date
{
    int year;
    int month;
    int day;
};

struct book
{
    char *title;        // 도서명
    char *author;       // 저자명
    char *publisher;    // 출판사
    int price;          // 가격
    struct date pubDay; // 출판일
};

char *makeString();

int main()
{
    struct book book;

    puts("<< 도서 정보 입력 >>");
    printf("도서명 입력 => ");
    book.title = makeString();

    printf("저자명 입력 => ");
    book.author = makeString();

    printf("출판사 입력 => ");
    book.publisher = makeString();

    printf("가격 입력 => ");
    scanf("%d", &book.price);

    printf("출판일 입력 => ");
    scanf("%d %d %d", &book.pubDay.year,
                      &book.pubDay.month,
                      &book.pubDay.day);

    puts("\n<< 도서 정보 출력 >>");
    printf("도서명 : %s\n", book.title);
    printf("저자명 : %s\n", book.author);
    printf("출판사 : %s\n", book.publisher);
    printf("가  격 : %d\n", book.price);
    printf("출판일 : %d/%2d/%2d\n", book.pubDay.year,
                                    book.pubDay.month,
                                    book.pubDay.day);

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
















