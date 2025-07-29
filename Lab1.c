#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Read elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add element to sum
    }

    // Calculate average
    float average = sum / n;

    // Print the result
    printf("Average of the entered numbers: %.2f\n", average);

    return 0;
}

