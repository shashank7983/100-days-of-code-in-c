/*Q88 (Strings)
Replace spaces with hyphens in a string.*/


#include <stdio.h>

int main() {
    char str[1000];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads input including spaces

    // Replace spaces with hyphens
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    // Output modified string
    printf("Modified string: %s", str);

    return 0;
}
