#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to remove trailing newline character from fgets input
void removeNewline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

bool areAnagrams(char str1[], char str2[]) {
    // If lengths are different, not anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Create a count array for all ASCII characters
    int count[256] = {0};

    // Count characters in str1 and subtract in str2
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[50];
    char str2[50];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    // Remove newline characters
    removeNewline(str1);
    removeNewline(str2);

    if (areAnagrams(str1, str2)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
