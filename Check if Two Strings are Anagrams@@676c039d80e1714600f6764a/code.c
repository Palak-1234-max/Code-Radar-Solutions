// Your code here...
#include <stdio.h>

#define MAX_CHAR 256  // Total number of characters (ASCII range)

int main() {
    char a[50], b[50];
    int freqA[MAX_CHAR] = {0}, freqB[MAX_CHAR] = {0};
    int i;

    // Read two strings
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // Remove newline character if present (from fgets)
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    // Count frequency of each character in string a
    for(i = 0; a[i] != '\0'; i++) {
        freqA[(int)a[i]]++;
    }

    // Count frequency of each character in string b
    for(i = 0; b[i] != '\0'; i++) {
        freqB[(int)b[i]]++;
    }

    // Compare frequency arrays of both strings
    for(i = 0; i < MAX_CHAR; i++) {
        if(freqA[i] != freqB[i]) {
            printf("No\n");
            return 0;  // If frequencies don't match, no need to check further
        }
    }

    // If frequencies match, print "Yes"
    printf("Yes\n");
    return 0;
}
