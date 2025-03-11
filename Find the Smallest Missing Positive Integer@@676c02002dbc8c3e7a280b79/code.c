// Your code here...
#include <stdio.h>

int main() {
    int n;

    // Input size of the array
    scanf("%d", &n);

    if (n <= 0) {
        printf("1");
        return 0;
    }

    int arr[n];

    // Input elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using a simple bubble sort (for simplicity)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Now, check for the smallest missing positive integer
    int smallest_missing = 1; // The first positive integer we are looking for is 1

    for (int i = 0; i < n; i++) {
        if (arr[i] == smallest_missing) {
            smallest_missing++; // If the current number is the smallest_missing, increment it
        }
    }
    printf("%d",smallest_missing);
    return 0;
}
