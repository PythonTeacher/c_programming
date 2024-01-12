#include <stdio.h>

struct book
{
    char title[100];        // 도서명
    char author[100];       // 저자명
    char publisher[100];    // 출판사
    int price;              // 가격
};

int main()
{
    struct book book;

    puts("<< 도서 정보 입력 >>");
    printf("도서명 입력 => ");
    gets(book.title);

    printf("저자명 입력 => ");
    gets(book.author);

    printf("출판사 입력 => ");
    gets(book.publisher);

    printf("가격 입력 => ");
    scanf("%d", &book.price);

    puts("\n<< 도서 정보 출력 >>");
    printf("도서명 : %s\n", book.title);
    printf("저자명 : %s\n", book.author);
    printf("출판사 : %s\n", book.publisher);
    printf("가  격 : %d원\n", book.price);

    return 0;
}
