#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float n;
int j;
int output = 0;

do
{
    n = get_float("How much change do you need\n");
}
while (n<0);

j = round(n*100);

printf("Value is %i", j);

for (int quarter = 0; j >= 25; quarter++)
        {
            j -= 25;
            output += 1;
        }
for (int dime = 0; j >= 10; dime++)
        {
            j -= 10;
            output += 1;
        }
for (int nickel = 0; j >= 5; nickel++)
        {
            j -= 5;
            output += 1;
        }
for (int penny = 0; j >= 1; penny++)
        {
            j -= 1;
            output += 1;
        }
printf("Coins required is %i\n", output);
}