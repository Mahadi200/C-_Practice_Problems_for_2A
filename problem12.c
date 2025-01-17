#include <stdio.h>

int main()
{
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;

    // Input the source and destination file names
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    printf("Enter the destination file name: ");
    scanf("%s", destFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
    {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL)
    {
        printf("Error: Could not open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
