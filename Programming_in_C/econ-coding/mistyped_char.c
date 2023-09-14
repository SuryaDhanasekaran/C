#include <stdio.h>
#include <string.h>

void removeMistypedChars(char *str) {
    int len = strlen(str);

    if (len <= 2) {
        return; // No need to process if the string length is 2 or less
    }

    char result[len]; // Create a result array to store the modified string
    int resultIndex = 0; // Index for the result array

    result[resultIndex++] = str[0]; // Add the first character

    for (int i = 1; i < len; i++) {
        if (str[i] != str[i - 1] || (i < len - 1 && str[i] != str[i + 1])) {
            result[resultIndex++] = str[i]; // Add the character if it's different from its neighbors
        }
    }

    // Null-terminate the result string
    result[resultIndex] = '\0';

    // Copy the result back to the original string
    strcpy(str, result);
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    removeMistypedChars(inputString);

    printf("Modified string: %s\n", inputString);

    return 0;
}
