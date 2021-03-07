#include <stdio.h>
#include <cs50.h>

int main(void)

{
    // declare integer
    int n;
    //prompt user for number, repeat if n is greater than 23 or less than 0
    do
    {
        n = get_int("Positive Number: ");
    }
    while (n > 23 || n < 0);
    // print out collumns

    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i+2; k++)
        {
            printf("#");
        }
            printf("  ");
          for (int k = 0; k < i+2; k++)
        {
            printf("#");
        }
          for (int j = n-i; j > 1; j--)
        {
            printf(" ");
        }
            printf("\n");
    }
}