#include <stdio.h>

struct book
{
    char title[100];        // ������
    char author[100];       // ���ڸ�
    char publisher[100];    // ���ǻ�
    int price;              // ����
};

int main()
{
    struct book book;

    puts("<< ���� ���� �Է� >>");
    printf("������ �Է� => ");
    gets(book.title);

    printf("���ڸ� �Է� => ");
    gets(book.author);

    printf("���ǻ� �Է� => ");
    gets(book.publisher);

    printf("���� �Է� => ");
    scanf("%d", &book.price);

    puts("\n<< ���� ���� ��� >>");
    printf("������ : %s\n", book.title);
    printf("���ڸ� : %s\n", book.author);
    printf("���ǻ� : %s\n", book.publisher);
    printf("��  �� : %d��\n", book.price);

    return 0;
}
