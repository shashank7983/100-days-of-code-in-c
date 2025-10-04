/*Q90 (Strings)
Toggle case of each character in a string.*/

#include <stdio.h>

int main() {
    char str[1000];
    int i;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Toggle case
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert to lowercase
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        }
    }

    // Output toggled string
    printf("Toggled case string: %s", str);

    return 0;
}

