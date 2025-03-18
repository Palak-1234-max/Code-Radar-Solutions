// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end, len, i;
    
    // Get the input string
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present (fgets adds it)
    str[strcspn(str, "\n")] = '\0';

    // Find the length of the string
    len = strlen(str);

    // Step 1: Reverse the entire string
    start = 0;
    end = len - 1;
    while (start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // Step 2: Reverse each word back to original order
    start = 0;
    for (i = 0; i <= len; i++) {
        // When a space or the end of the string is found, reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;  // End of the word
            // Reverse the word between start and end
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;  // Move to the start of the next word
        }
    }

    // Print the final string with the entire string reversed but words in the original order
    printf("%s", str);
    
    return 0;
}
