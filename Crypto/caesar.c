#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // error handling
    if (argc != 2) {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    // get the rotation number for encryption
    int rotate_n = atoi(argv[1]);

    // get string to manipulate from user
    string input = get_string("plaintext: ");

    // work out length of string for character loop
    int length = strlen(input);

    // print out characters + rotation (based on ascii) depending on case
    printf("ciphertext: ");
    for (int i = 0; i < length; i++){
        if (input[i] >= 'a' && input[i] <= 'z') {
            printf("%c", (((input[i] - 97 + rotate_n) % 26) + 97));
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            printf("%c", (((input[i] - 65 + rotate_n) % 26) + 65));
        } else {
            printf("%c", input[i]);
        }
    }

    printf("\n");

    return 0;
}