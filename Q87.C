/*Q87 (Strings)
Count spaces, digits, and special characters in a string.*/


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, specialChars = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer alternative to gets()

    // Loop through each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (!isalpha(str[i]) && str[i] != '\n') {
            specialChars++;
        }
    }

    // Output results
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
