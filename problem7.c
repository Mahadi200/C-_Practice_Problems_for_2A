#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open the file for reading
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++; // Count every character
        if (ch == '\n') {
            lines++; // Count lines when a newline is encountered
        }
        if (isspace(ch) || ch == '\n' || ch == '\t') {
            if (inWord) {
                words++; // End of a word
                inWord = 0;
            }
        } else {
            inWord = 1; // Inside a word
        }
    }

    // If the file ends with a word, count it
    if (inWord) {
        words++;
    }

    // If the file is not empty, count the last line
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    // Print the results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    // Close the file
    fclose(file);
    return 0;
}
