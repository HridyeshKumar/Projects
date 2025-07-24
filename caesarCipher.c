#include <stdio.h>
#include <ctype.h>

void encryptCaesar(char *plaintext, int key)
{
    int i = 0;
    char ch;

    while (plaintext[i] != '\0')
    {
        ch = plaintext[i];

        if (isupper(ch))
        {
            ch = ((ch - 'A' + key) % 26) + 'A';
        }
        else if (islower(ch))
        {
            ch = ((ch - 'a' + key) % 26) + 'a';
        }
        // If not a letter, leave it as is
        printf("%c", ch);
        i++;
    }
}

int main(){
    char plaintext[100];
    int key = 6; // Caesar cipher shift

    printf("Enter plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    printf("Ciphertext: ");
    encryptCaesar(plaintext, key);

    return 0;
}
