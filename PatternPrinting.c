#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for (int i = 1; i <= 4; i++)
    { int a=i;
    for (int j = 1; j <= i; j++)
        {
            printf("%d" ,a);
            a++;
        }
        printf("\n");
    }
    for (int i = 1; i <= 4; i++)
     {
         for (int j = 1; j <= i; j++)
         {
             printf("*");
         }
         printf("\n");
     }


    for (int i = 0; i < 4; i++)
      {
          for (int j = 4; j > i; j--)
         {
             printf("*");
        }
         printf("\n");
      }

    return 0;
}