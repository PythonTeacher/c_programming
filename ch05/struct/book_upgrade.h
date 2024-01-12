struct date
{
    int year;
    int month;
    int day;
};

typedef struct book
{
    char *title;        // 도서명
    char *author;       // 저자명
    char *publisher;    // 출판사
    int price;          // 가격
    struct date pubDay; // 출판일
} Book;

void printBook(Book book);
char *makeString();
void inputBook(Book *book, int num);
void outputBook(Book *book, int num);
void freeBook(Book *book, int num);
