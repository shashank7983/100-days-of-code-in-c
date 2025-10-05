/*Q91 (Strings)
Remove all vowels from a string.*/

#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // convert to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char* str) {
    int i, j = 0;
    char result[strlen(str) + 1];

    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';
    strcpy(str, result); // copy result back to original string
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}

