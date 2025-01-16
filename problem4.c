#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalidrome(char str[], int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    if (str[start] != str[end])
    {
        return false;
    }
    return isPalidrome(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);

    if (isPalidrome(str, 0, strlen(str) - 1))
    {
        printf("Yes,Palidrome\n");
    }
    else
    {
        printf("No,Not a palindrome \n");
    }

    return 0;
}