#include <stdio.h>

int main()
{
    // 문자배열
    char str[10];
    char *p = str;

    // 문자열 입력
    gets(str);          // apple  --> gets(100);

    // 문자열 출력
    puts(str);          // apple  --> puts(100);

    printLine();
    printf("%s\n", str);    // apple
    printf("%s\n", str+1);  // pple
    printf("%s\n", str+2);  // ple
    printLine();

    str[1] = 'b';
    p[2] = 'b';
    puts(str);
    printLine();

    // 문자열 상수
    printf("apple\n");              // printf(200);
    printf("%s\n", "apple");	    // %s는 생략 가능
    printLine();

    // 주소값 확인
    printf("%p\n", str);
    printf("%p\n", "apple");
    printf("%p\n", "apple");	    // 동일한 주소 리턴
    printf("%c\n", "apple"[0]);	    // 배열 표현
    printf("%c\n", "apple"[3]);  	// 배열 표현
    printf("%c\n", *"apple");     	// 포인터 표현
    printf("%c\n", *("apple"+3)); 	// 포인터 표현
    printLine();

    //"apple"[1] = 'b';

    // 포인터 변수
    char *sp = "apple";
    printf("%s\n", sp);             // printf("%s", sp);
    printf("%c\n", sp[2]);          // p
    printf("%c\n", *(sp+3));        // l
    printf("%s\n", sp+1);           // pple

    //sp[1] = 'b';

    // 포인터 변경
    //str++;
    sp++;
    puts(sp);

    // 문자열 변경
    //str = "banana";
    strcpy(str, "banana");

    sp = "banana";
    puts(str);
    puts(sp);

    // sizeof, strlen
    printf("%d\n", sizeof(str));    //10
    printf("%d\n", strlen(str));    //6
    printf("%d\n", sizeof(sp));     //4 or 8

    return 0;
}

void printLine()
{
    puts("--------------------------------------");
}
