#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') { // Traverse until the null terminator
        length++;
        str++; // Move the pointer to the next character
    }
    return length;
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[stringLength(str) - 1] == '\n') {
        str[stringLength(str) - 1] = '\0';
    }

    // Calculate the length using the pointer function
    int length = stringLength(str);

    // Output the length
    printf("Length: %d\n", length);

    return 0;
}
