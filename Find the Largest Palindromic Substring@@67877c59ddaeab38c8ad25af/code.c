// Your code here...
#include <stdio.h>
#include <string.h>

// Helper function to expand around the center and find the longest palindrome
char *expandAroundCenter(char str[], int left, int right, int length) {
    // Expand as long as the characters at both ends are equal
    while (left >= 0 && right < length && str[left] == str[right]) {
        left--;
        right++;
    }
    
    // Return the substring from the found palindrome
    // (left+1) to (right-1) will give the palindrome substring
    static char longest[1000];  // To store the largest palindrome found
    memset(longest, 0, sizeof(longest));  // Clear the previous palindrome
    
    // Copy the longest palindrome found
    int j = 0;
    for (int i = left + 1; i < right; i++) {
        longest[j++] = str[i];
    }
    
    return longest;
}

// Function to find the largest palindromic substring
char *longestPalindrome(char str[]) {
    int length = strlen(str);
    char *largestPalindrome = "";
    
    // Loop over each character in the string as a center
    for (int i = 0; i < length; i++) {
        // Odd length palindromes (centered at i)
        char *oddPalindrome = expandAroundCenter(str, i, i, length);
        
        // Even length palindromes (centered between i and i+1)
        char *evenPalindrome = expandAroundCenter(str, i, i + 1, length);
        
        // Compare the lengths of palindromes and update the largest one found
        if (strlen(oddPalindrome) > strlen(largestPalindrome)) {
            largestPalindrome = oddPalindrome;
        }
        if (strlen(evenPalindrome) > strlen(largestPalindrome)) {
            largestPalindrome = evenPalindrome;
        }
    }
    
    return largestPalindrome;
}

int main() {
    char str[1000];
    
    // Read input string
    scanf("%s",&str);
    
    // Find and print the largest palindromic substring
    char *largestPal = longestPalindrome(str);
    printf("%s", largestPal);
    
    return 0;
}
