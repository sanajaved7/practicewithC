// A program that encrypts messages using Caesar’s cipher.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Validates user input to make sure encryption key was provided
    if (argc > 2 || argc < 2)
        {
            printf("Please provide a correct encryption key.\n");
            return 1;
        }

    // Converts encryption key from user from type string to int
    int k = atoi(argv[1]);

    // Validates user input to make sure valid encryption key was provided
    if (k < 1)
    {
        printf("Please provide a non-negative integer.\n");
        return 1;
    }

    printf("What phrase would you like to encrypt?\n");

    string s = GetString();

    for (int i = 0, n = strlen(s); i < n; i++)
        // Checks if letter is lowercase
        if (s[i] >= 97 & s[i] <= 122)
        {
            printf("%c", (((s[i] - 'a') + k) % 26)+ 'a');
        }
        // Checks if letter is uppercase
        else if (s[i] >= 65 & s[i] <= 90)
        {
            printf("%c", (((s[i] - 'A') + k) % 26)+ 'A');
        }
        else
        {
            printf("%c", s[i]);
        }
    printf("\n");
    return 0;
}
