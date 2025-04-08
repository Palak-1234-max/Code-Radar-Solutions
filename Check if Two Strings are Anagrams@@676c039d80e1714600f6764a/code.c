#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

    if (areAnagrams(str1, str2)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
