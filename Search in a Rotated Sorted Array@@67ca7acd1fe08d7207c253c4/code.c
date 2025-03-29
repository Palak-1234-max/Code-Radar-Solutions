#include <stdio.h>

// Function to search target in rotated sorted array
int searchInRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) 
            return mid; // Found target

        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {
            if (arr[left] <= target && target < arr[mid]) 
                right = mid - 1; // Search in the left half
            else 
                left = mid + 1; // Search in the right half
        }
        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[right]) 
                left = mid + 1; // Search in the right half
            else 
                right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

// Driver Code
int main() {
    int arr[] = {15, 18, 2, 3, 6, 12}; // Rotated sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int index = searchInRotatedArray(arr, n, target);

    if (index != -1)
        return index;
    else
        return target;

    return 0;
}
