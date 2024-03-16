#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int h, n, j, k;

   do {
      n = get_int("Size: ");
   }
   while (n < 1);

   for (int i = 0; i < n; i++)
   {
      for(k = n; k > i; k--)
            printf("%c", ' ');

        // create hash tags
        for(j = 0; j < i+2; j++)
            printf("#");

        printf("\n");
    }
    return 0;

}