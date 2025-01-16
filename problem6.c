#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(const char *str)
{
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isspace(str[i]))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            count++;
        }
    }

    return count;
}

int main()
{
    char str[100];

    printf("enter a string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int wordCount = countWords(str);
    printf("Number of words : %d \n", wordCount);

    return 0;
}