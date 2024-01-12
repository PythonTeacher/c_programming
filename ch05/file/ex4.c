#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20];
    FILE *fp;
    int i=0;

    if((fp = fopen("input.txt", "r")) == NULL)
    {
        puts("file does not exist!!!");
        return 1;
    }

    while(fgets(arr, sizeof(arr), fp) != NULL)
    {
        arr[strlen(arr) - 1] = '\0';
        printf("%d번째 과일 : [%s]\n", ++i, arr);
    }
    return 0;
}
