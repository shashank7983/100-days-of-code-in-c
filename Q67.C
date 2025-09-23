#include <stdio.h>

int main() {
    // Making the array
    int len;
    printf("Enter the length of array: \n");
    scanf("%d", &len);
    
    int arr[len + 1];  // VLA (Variable Length Array)

    printf("Enter %d elements:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    // New element with Position
    int pos, newElement;
    printf("Enter the position of the new element along with the element (Space Separated): \n");
    scanf("%d %d", &pos, &newElement);

    // Validate position
    if (pos < 1 || pos > len + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    pos = pos - 1;  // Adjust to 0-based index

    // Shifting elements
    for (int i = len; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Inserting the new element
    arr[pos] = newElement;

    // Printing the updated array
    for (int i = 0; i < len + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
