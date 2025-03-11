// Your code here...
#include <stdio.h>
int main() {
    int n;
    // Input size of the array
    scanf("%d", &n);

    if (n == 0) {
        printf("-1");
        return 0;
    }

    int arr[n];
    // Input elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    // Variable to keep track of the majority element
    int candidate = arr[0], count = 1;

    // Finding the candidate for majority element using Boyer-Moore Voting Algorithm
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    // Verify if the candidate is actually the majority element
    int occurrences = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            occurrences++;
        }
    }

    if (occurrences > n / 2) {
        printf("%d", candidate);
    } else {
        printf("-1");  // No majority element
    }

    return 0;
}
