/*Q92 (Strings)
Find the first repeating lowercase alphabet in a string.*/

#include <stdio.h>
#include <string.h>

char findFirstRepeatingLowercase(char *str) {
    int freq[26] = {0};  // for 'a' to 'z'

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                return ch;  // found the first repeating lowercase character
            }
        }
    }

    return '\0';  // no repeating lowercase character found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    char result = findFirstRepeatingLowercase(str);

    if (result != '\0') {
        printf("First repeating lowercase alphabet: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}

