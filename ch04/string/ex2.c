#include <stdio.h>

int main()
{
    int num;
    char *className = NULL;

    while(1)
    {
        printf("반을 입력하세요 (종료:9) => ");
        scanf("%d", &num);

        switch(num)
        {
        case 1:
            className = "이비과";      break;
        case 2:
            className = "디컨과";      break;
        case 3:
        case 4:
            className = "웹플과";      break;
        case 5:
        case 6:
            className = "해방과";      break;
        case 9:
            puts("Bye~~");      return 0;
        default:
            puts("그런반 없다!!!");
            continue;
        }

        printf("%s에 오신걸 환영~~~\n", className);
    }

    return 0;
}
