// A program that creates half-pyramid using hashes for blocks. User is prompted for half-pyramid’s height. If the user fails to provide a non-negative integer no greater than 23, user is re-prompted.

#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Please give a number: \n");
        n = GetInt();
        if (n == 0)
            {
                return n;
            }
    }
    while(n < 1 | n > 23);

    for (int i=0; i < n; i++)
    {
        //printf("%i", n + i - 1);

        for (int j=0; j < (n-i)-1; j++)
        {
            printf(" ");
        }
        for (int y=0; y < i+2; y++)
            {
                printf("#");
            }
        printf("\n");
    }
}
