struct date
{
    int year;
    int month;
    int day;
};

typedef struct book
{
    char *title;        // ������
    char *author;       // ���ڸ�
    char *publisher;    // ���ǻ�
    int price;          // ����
    struct date pubDay; // ������
} Book;

void printBook(Book book);
char *makeString();
void inputBook(Book *book);
void outputBook(Book *book);
void freeBook(Book *book);
