#include <stdio.h>
#include <stdlib.h>

/** Dynamic memory allocation (DMA) **/
int main()
{
    int *ptr_one;

    ptr_one = (int *)malloc(sizeof(int));

    if (ptr_one == 0)
    {
        printf("ERROR: Out of memory\n");
        return 1;
    }

    *ptr_one = 25;
    printf("%d\n", *ptr_one);

    free(ptr_one);

    return 0;
}

int main()
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);

   return(0);
}


/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

int main ()
{
  int i,n;
  char * buffer;

  printf ("How long do you want the string? ");
  scanf ("%d", &i);

  buffer = (char*) malloc (i+1);
  if (buffer==NULL) exit (1);

  for (n=0; n<i; n++)
    buffer[n]=rand()%26+'a';
  buffer[i]='\0';

  printf ("Random string: %s\n",buffer);
  free (buffer);

  return 0;
}

// 두개의 차이는?
// int* heapArray = (int*)malloc(10 * sizeof(int));
// int stackArray[10];
