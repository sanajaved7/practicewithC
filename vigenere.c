 // A program that encrypts messages using the Vigenere cipher.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Validates user input to make sure encryption key was provided
    if (argc > 2 || argc < 2)
        {
            printf("Please provide a correct encryption key.\n");
            return 1;
        }

    // Converts encryption key to lowercase and rejects encryption keys with non-alphabetical characters
    string k = argv[1];
    for (int i = 0, n = strlen(k); i < n; i++)
    {
       k[i] = tolower(k[i]);
       if (k[i] < 97 || k[i] > 122)
        {
            printf("Please provide a correct encryption key.\n");
            return 1;
        }
    }

    printf("What phrase would you like to encrypt?\n");

    string s = GetString();

    //Initializes separate counter for encryption key index to ensure counter skips spaces and non-alphabetic characters in message
    int j = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {

        int shift_value = ((int) k[j % strlen(k)]) - 97;

        // Checks if letter is lowercase
        if (s[i] >= 97 & s[i] <= 122)
        {
            printf("%c", (((s[i] - 'a') + shift_value) % 26)+ 'a');
            j++;
        }
        // Checks if letter is uppercase
        else if (s[i] >= 65 & s[i] <= 90)
        {
            printf("%c", (((s[i] - 'A') + shift_value) % 26)+ 'A');
            j++;
        }
        else
        {
            printf("%c", s[i]);
        }
    }
      printf("\n");
      return 0;
}
