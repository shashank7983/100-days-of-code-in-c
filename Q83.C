/*Q83 (Strings)
Count vowels and consonants in a string*/


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer alternative to gets()

    // Loop through each character
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase for easier comparison

        if (isalpha(ch)) { // check if the character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Output results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
