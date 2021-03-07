#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  float f = get_float("Float?");

  int j = floor(f);

  printf("value is %i", j);
}