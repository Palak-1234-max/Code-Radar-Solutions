// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

int main() {
    char str[100];
    int frequency[MAX_CHAR] = {0};
    int maxFreq = 0;
    char mostFrequent = '\0';

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char c = (str[i] >= 'a' && str[i] <= 'z') ? str[i] : str[i] + 32;
            frequency[c]++;
        }
    }

    for (int i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] > maxFreq || (frequency[i] == maxFreq && i < mostFrequent)) {
            maxFreq = frequency[i];
            mostFrequent = i;
        }
    }

    if (mostFrequent != '\0') {
        printf("%c", mostFrequent);
    }

    return 0;
}
