#include <stdio.h>
#include <string.h>

int main()
{
    // kiwi, mangostein, strawberry, durian, starfruits
    //  2         3          5           1      4
    // 2차원 배열 선언 후 오름차순 정렬
    char fruit[5][20] = {"pineapple", "mango", "banana",
                         "watermelon", "strawberry"};

    int i, j;
    char temp[20];

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(fruit[i], fruit[j]) > 0)
            {
                strcpy(temp, fruit[i]);
                strcpy(fruit[i], fruit[j]);
                strcpy(fruit[j], temp);
            }
        }
    }

    //fruit[1] = "grape";
    strcpy(fruit[1], "grape");

    for(i=0; i<5; i++)
        puts(fruit[i]);


    //================ 포인터 배열 방식 =======================//

    char *fruit[5] = {"pineapple", "mango", "banana",
                      "watermelon", "strawberry"};

    int i, j;
    char *temp;

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(fruit[i], fruit[j]) > 0)
            {
                temp = fruit[i];
                fruit[i] = fruit[j];
                fruit[j] = temp;
            }
        }
    }

    fruit[1] = "grape";

    for(i=0; i<5; i++)
        puts(fruit[i]);

    return 0;
}
