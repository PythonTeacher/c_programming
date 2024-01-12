#include <stdio.h>

int main()
{
    // 1. 문자배열
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

    // 2. 문자열 상수
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

    // 포인터 변수
    char *sp = "apple";

    printf("%s\n", sp);
    printf("%c\n", sp[2]);      // p
    printf("%c\n", *(sp+3));    // l
    printf("%s\n", sp+1);       // pple

    //sp[1] = 'b';

    // 포인터 값 변경
    //str++;
    sp++;
    puts(sp);

    // 문자열 변경
    str = "banana";
    strcpy(str, "banana");

    sp = "banana";
    puts(sp);

    // 길이 확인
    printf("%d\n", strlen(sp));

    return 0;
}

void printLine()
{
    puts("-------------------------------------");
}
