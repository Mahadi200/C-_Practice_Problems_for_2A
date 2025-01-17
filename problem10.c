// Write a program to calculate the sum of array elements using pointers

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int *ptr;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the pointer to the first element of the array
    ptr = arr;

    // Calculate the sum using the pointer
    for (i = 0; i < n; i++) {
        sum += *(ptr + i); // Access array elements using pointer arithmetic
    }

    // Print the sum
    printf("Sum: %d\n", sum);

    return 0;
}
