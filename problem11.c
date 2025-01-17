#include <stdio.h>
#include <string.h>

int main() {
    char str[100], find, replace;
    int i;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end if present
    str[strcspn(str, "\n")] = '\0';

    // Input the character to find and replace
    printf("Find: ");
    scanf(" %c", &find);
    printf("Replace: ");
    scanf(" %c", &replace);

    // Replace all occurrences of the character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == find) {
            str[i] = replace;
        }
    }

    // Output the modified string
    printf("Result: %s\n", str);

    return 0;
}
