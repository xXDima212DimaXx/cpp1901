#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    // Get the key to the cipher
    string key = argv[1];
    if (argc != 2)
    {
        printf("Please give me a valid key\n");
        return 1;
    }
    else
    {
        //Check that it is a letter key
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            if (isalpha(key[i]))
            {
            }
            else
            {   printf("Invalid key. Try again\n");
                return 1;
            }
        }
    }

    //Get the text to encrypt
    string plntxt = get_string();
    if (plntxt != NULL)
    {
        //Encrypt and print
        for (int i = 0, j = 0, n = strlen(plntxt); i < n; i++, j++)
        {
            if (j > strlen(key) - 1)
            {
                j = 0;
            }
                int c = 0;
                //Check case of textual character
                //Assign it an alphabet number and encrypt
                if (isupper(plntxt[i]))
                {
                    c = (((plntxt[i] - 65) + (tolower(key[j]) - 97))%26) + 65;
                    printf("%c", (char)c);
                }
                else if (islower(plntxt[i]))
                {
                    c = (((plntxt[i] - 97) + (tolower(key[j]) - 97))%26) + 97;
                    printf("%c", (char)c);
                }
                else
                {
                    printf("%c", plntxt[i]);
                    j--;
                }
            }
        }
        printf("\n");

    return 0;
}