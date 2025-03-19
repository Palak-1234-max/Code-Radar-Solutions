// Your code here...
#include <stdio.h>
#include <string.h>

// Helper function to expand around the center and find the longest palindrome
void expandAroundCenter(char str[], int left, int right, int length, int *start, int *maxLen) {
    // Expand as long as the characters at both ends are equal
    while (left >= 0 && right < length && str[left] == str[right]) {
        left--;
        right++;
    }
    
    // Update start index and maximum length if a larger palindrome is found
    int len = right - left - 1;  // The length of the palindrome
    if (len > *maxLen) {
        *maxLen = len;
        *start = left + 1;
    }
}

// Function to find the largest palindromic substring
char* longestPalindrome(char str[]) {
    int length = strlen(str);
    int start = 0;
    int maxLen = 1;  // Minimum palindrome length is 1 (a single character)

    // Loop over each character in the string as a center
    for (int i = 0; i < length; i++) {
        // Odd length palindromes (centered at i)
        expandAroundCenter(str, i, i, length, &start, &maxLen);
        
        // Even length palindromes (centered between i and i+1)
        expandAroundCenter(str, i, i + 1, length, &start, &maxLen);
    }

    // Create a new string to store the largest palindrome found
    static char largest[1000];  // Buffer to store the longest palindrome substring
    memset(largest, 0, sizeof(largest));  // Clear previous data
    
    // Copy the longest palindrome to the result array
    for (int i = 0; i < maxLen; i++) {
        largest[i] = str[start + i];
    }

    return largest;
}

int main() {
    char str[1000];
    
    // Read input string
    scanf("%s", &str);
    
    // Find and print the largest palindromic substring
    char* largestPal = longestPalindrome(str);
    printf("%s", largestPal);
    
    return 0;
}
