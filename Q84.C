/*Q84 (Strings)
Convert a lowercase string to uppercase without using built-in functions.*/

#include <stdio.h>

int main() {
    char str[1000];

    // Input string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert each character to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if character is in lowercase range
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // or subtract 32
        }
    }

    // Output result
    printf("Uppercase string: %s", str);

    return 0;
}

