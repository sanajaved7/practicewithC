// Program that asks the user how much change is owed and then returns the minimum number of coins with which said change can be made.

#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    int y;
    do
    {
        printf("How much change is owed?\n");
        n = GetFloat();
        float x = (n * 100);
        y = (int) round(x);
        //return y;
    }
    while(n < (float) 0);

    int quarters = (y / 25);
    int remainder = y % 25;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    if (remainder >= 10)
        {
            dimes = (remainder/10);
            remainder = remainder % 10;
        }
    if (remainder < 10 && remainder >= 5)
        {
            nickels = (remainder/5);
            remainder = remainder % 5;
        }
    if (remainder < 5 && remainder >= 1)
        {
            pennies = remainder;
        }
    printf("%i", quarters + dimes + nickels + pennies);

}
