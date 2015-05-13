// Program that prompts user for name and returns user's
// capitalized initials.


#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //get name from user
    string s = GetString();
    char a = toupper(s[0]);
    printf("%c", a);

    for (int i = 1, n = strlen(s); i < n; i++)
    {
        if (isspace(s[i]))
            {
                char b = toupper(s[i+1]);
                printf("%c", b);
            }
    }
    printf("\n");
}
