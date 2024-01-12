#include <stdio.h>
#include <string.h>

int main()
{
    char arr[3];

    FILE *fp1 = freopen("test_input.txt", "r", stdin);
    FILE *fp2 = freopen("test_input.txt", "w", stdout);

    printf("%c\n", 'a');
    printf("%c\n", 'b');
    printf("%c\n", 'c');

    freopen("CON", "w", stdout);

    while(fgets(arr, sizeof(arr), fp1) != NULL)
    {
        arr[1] = '\0';
        printf("%s\n", arr);
    }

    fclose(fp1);

    return 0;
}
