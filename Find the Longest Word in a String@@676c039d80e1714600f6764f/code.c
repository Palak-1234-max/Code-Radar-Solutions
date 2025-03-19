// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

// Function to find the longest word
void findLongestWord(char *str) {
    int maxLength = 0;
    int currentLength = 0;
    int start = 0;
    int maxStart = 0;

    // Iterate through the string to find the longest word
    for (int i = 0; str[i] != '\0'; i++) {
        // If the current character is a letter, increase the current word length
        if (isalpha(str[i])) {
            if (currentLength == 0) {
                start = i; // Mark the start of the word
            }
            currentLength++;
        } else {
            // When a space or punctuation is encountered, check if the current word is the longest
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = start;
            }
            currentLength = 0; // Reset current length for the next word
        }
    }

    // After the loop, we might have encountered the longest word at the end
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStart = start;
    }

    // Print the longest word
    char longestWord[maxLength + 1];
    strncpy(longestWord, str + maxStart, maxLength);
    longestWord[maxLength] = '\0';

    printf("%s", longestWord);
}

int main() {
    char str[MAX_LENGTH];

    // Input the string
    fgets(str, MAX_LENGTH, stdin);

    // Remove the trailing newline character, if any
    str[strcspn(str, "\n")] = '\0';

    // Find and print the longest word
    findLongestWord(str);

    return 0;
}
