/*Q89 (Strings)
Count frequency of a given character in a string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int i, count = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Input character to search
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Print result
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
