#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int n;

   do
   {
   n = get_long_long("Credit Card Number:\n");
   }
   while (n <= 0);

}