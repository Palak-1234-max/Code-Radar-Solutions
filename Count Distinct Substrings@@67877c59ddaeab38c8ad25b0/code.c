// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to perform counting sort based on the character at position `k`
void countingSort(int arr[], int temp[], int n, int k) {
    int count[256] = {0};
    
    // Count frequency of characters at index k
    for (int i = 0; i < n; i++) {
        count[arr[i] + k < n ? arr[arr[i] + k] : 0]++;
    }
    
    // Compute cumulative sum
    for (int i = 1; i < 256; i++) {
        count[i] += count[i - 1];
    }
    
    // Sort suffixes
    for (int i = n - 1; i >= 0; i--) {
        temp[--count[arr[i] + k < n ? arr[arr[i] + k] : 0]] = arr[i];
    }
    
    // Copy sorted suffixes back to arr
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

// Function to construct the suffix array
void buildSuffixArray(char *str, int *suffixArray, int n) {
    int temp[n];
    int rank[n];
    
    // Initial ranking based on the first character
    for (int i = 0; i < n; i++) {
        suffixArray[i] = i;
        rank[i] = str[i];
    }
    
    // Sort the suffixes by their first 2^k characters
    for (int k = 1; k < n; k *= 2) {
        countingSort(suffixArray, temp, n, k);
        
        // Recalculate ranks based on the first 2^k characters
        int newRank[n];
        newRank[suffixArray[0]] = 0;
        
        for (int i = 1; i < n; i++) {
            newRank[suffixArray[i]] = newRank[suffixArray[i - 1]];
            if (str[suffixArray[i]] != str[suffixArray[i - 1]] || suffixArray[i] + k < n && suffixArray[i - 1] + k < n && str[suffixArray[i] + k] != str[suffixArray[i - 1] + k]) {
                newRank[suffixArray[i]]++;
            }
        }
        
        // Update rank array
        for (int i = 0; i < n; i++) {
            rank[i] = newRank[i];
        }
    }
}

// Function to build the LCP array
void buildLCPArray(char *str, int *suffixArray, int *lcpArray, int n) {
    int rank[n];
    
    // Compute the rank of each suffix
    for (int i = 0; i < n; i++) {
        rank[suffixArray[i]] = i;
    }
    
    int k = 0;
    
    // Calculate the LCP array using the rank information
    for (int i = 0; i < n; i++) {
        if (rank[i] == n - 1) {
            k = 0;
            continue;
        }
        
        int j = suffixArray[rank[i] + 1];
        
        while (i + k < n && j + k < n && str[i + k] == str[j + k]) {
            k++;
        }
        
        lcpArray[rank[i]] = k;
        
        if (k > 0) {
            k--;
        }
    }
}

// Function to count the number of distinct substrings
int countDistinctSubstrings(char *str) {
    int n = strlen(str);
    int suffixArray[n];
    int lcpArray[n];
    
    buildSuffixArray(str, suffixArray, n);
    buildLCPArray(str, suffixArray, lcpArray, n);
    
    // Total number of substrings is sum of lengths of all suffixes
    int totalSubstrings = n * (n + 1) / 2;
    
    // Subtract the sum of LCP values to get distinct substrings
    int lcpSum = 0;
    for (int i = 0; i < n - 1; i++) {
        lcpSum += lcpArray[i];
    }
    
    return totalSubstrings - lcpSum;
}

int main() {
    char str[1000];
    
    // Read input string
    scanf("%s", &str);
    
    // Count and print the total number of distinct substrings
    int distinctSubstrings = countDistinctSubstrings(str);
    printf("%d", distinctSubstrings);
    
    return 0;
}
