#include <stdio.h>

int main()
{
    // ���ڹ迭
    char str[10];
    char *p = str;

    // ���ڿ� �Է�
    gets(str);          // apple  --> gets(100);

    // ���ڿ� ���
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

    // ���ڿ� ���
    printf("apple\n");              // printf(200);
    printf("%s\n", "apple");	    // %s�� ���� ����
    printLine();

    // �ּҰ� Ȯ��
    printf("%p\n", str);
    printf("%p\n", "apple");
    printf("%p\n", "apple");	    // ������ �ּ� ����
    printf("%c\n", "apple"[0]);	    // �迭 ǥ��
    printf("%c\n", "apple"[3]);  	// �迭 ǥ��
    printf("%c\n", *"apple");     	// ������ ǥ��
    printf("%c\n", *("apple"+3)); 	// ������ ǥ��
    printLine();

    //"apple"[1] = 'b';

    // ������ ����
    char *sp = "apple";
    printf("%s\n", sp);             // printf("%s", sp);
    printf("%c\n", sp[2]);          // p
    printf("%c\n", *(sp+3));        // l
    printf("%s\n", sp+1);           // pple

    //sp[1] = 'b';

    // ������ ����
    //str++;
    sp++;
    puts(sp);

    // ���ڿ� ����
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
