#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Process each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert character to lowercase for easier comparison

        if (ch >= 'a' && ch <= 'z') { // Check if it's an alphabetic character
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++; // Increment vowel count
            } else {
                consonants++; // Increment consonant count
            }
        }
    }

    // Print the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
