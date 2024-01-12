#include <stdio.h>

int main()
{
    char main[40+1];
    char soup[40+1];
    char side[100+1];
    char dessert[40+1];

    // Àâ°î¹ä/±Ù´ë±¹ º¸½Ó ÀâÃ¤ »óÃß/²¢ÀÙ½Ó½ÓÀå Æ÷±â±èÄ¡ »ç°ú
    puts("¿À´ÃÀÇ ¸ŞÀÎÀº?");
    gets(main);

    puts("¿À´ÃÀÇ ±¹Àº?");
    gets(soup);

    puts("¿À´ÃÀÇ ¹İÂùÀº?");
    gets(side);

    puts("¿À´ÃÀÇ µğÀúÆ®´Â?");
    gets(dessert);

    puts("");
    puts("<< ¿À´ÃÀÇ ¸Ş´º >>");
    puts(main);
    puts(soup);
    puts(side);
    puts(dessert);

    return 0;
}
