#include <stdio.h>

int main()
{
    // 1. ���ڹ迭
    char str[10] = "apple";
    char *p = str;

    //gets(str);      // gets(100);

    puts(str);      // puts(100);

    printf("%s\n", str);    // apple
    printf("%s\n", str+1);  // pple
    printf("%s\n", str+2);  // ple

    str[1] = 'b';
    p[2] = 'b';
    puts(str);

    printLine();

    // 2. ���ڿ� ���
    printf("%s\n", "apple");  // "apple" -> 200
    printf("%p\n", "apple");
    printf("%p\n", str);
    printf("%p\n", "apple");
    printf("%p\n", "apple");
    printf("%p\n", "apple");
    printf("%p\n", "apple");

    printf("%c\n", "apple"[0]);     // a
    printf("%c\n", *"apple");       // a
    printf("%c\n", "apple"[3]);     // l
    printf("%c\n", *("apple"+3));   // l

    printLine();

    str[1] = 'b';
    //"apple"[1] = 'b';

    // ������ ����
    char *sp = "apple";

    printf("%s\n", sp);
    printf("%c\n", sp[2]);      // p
    printf("%c\n", *(sp+3));    // l
    printf("%s\n", sp+1);       // pple

    //sp[1] = 'b';

    // ������ �� ����
    //str++;
    sp++;
    puts(sp);

    // ���ڿ� ����
    str = "banana";
    strcpy(str, "banana");

    sp = "banana";
    puts(sp);

    // ���� Ȯ��
    printf("%d\n", strlen(sp));

    return 0;
}

void printLine()
{
    puts("-------------------------------------");
}
