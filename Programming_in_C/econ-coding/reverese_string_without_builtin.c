#include <stdio.h>

void reverseString(char *str) {
    if (str) {
        char *end = str;
        char temp;

        // Find the end of the string
        while (*end) {
            ++end;
        }
        --end; // Adjust to the last character before null terminator

        // Swap characters from start and end
        while (str < end) {
            temp = *str;
            *str++ = *end;
            *end-- = temp;
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
