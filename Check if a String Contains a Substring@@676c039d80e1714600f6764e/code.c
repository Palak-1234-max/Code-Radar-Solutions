// Your code here...
#include <stdio.h>

int containsSubstring(char *str, char *substring) {
    int i = 0, j = 0;

    // Loop through the main string
    while (str[i] != '\0') {
        // If the first character of the substring matches, start checking subsequent characters
        if (str[i] == substring[j]) {
            int k = i;
            // Compare the characters of the substring with the string
            while (str[k] == substring[j] && substring[j] != '\0') {
                k++;
                j++;
            }
            // If the entire substring is matched, return 1 (true)
            if (substring[j] == '\0') {
                return 1;
            }
            j = 0; // Reset j to check for a new substring
        }
        i++;
    }
    
    // If no match was found, return 0 (false)
    return 0;
}

int main() {
    char str[100], substring[100];

    // Input the main string
    fgets(str, sizeof(str), stdin);

    // Input the substring to check
    fgets(substring, sizeof(substring), stdin);

    // Remove newline characters if they are present
    str[strcspn(str, "\n")] = '\0';
    substring[strcspn(substring, "\n")] = '\0';

    // Check if the substring exists in the string
    if (containsSubstring(str, substring)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
