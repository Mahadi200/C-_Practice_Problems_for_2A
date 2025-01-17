#include <stdio.h>

int main() {
    int n, i, j;

    // Input the size of the matrix
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose of the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose of the matrix
    printf("Transpose:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
