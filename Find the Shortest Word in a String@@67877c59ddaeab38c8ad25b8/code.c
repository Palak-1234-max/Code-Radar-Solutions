// Your code here...
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char a[100];
    fgets(a, sizeof(a), stdin);

    // Remove the newline character if present
    a[strcspn(a, "\n")] = '\0';

    int i, start = 0, end = 0, minLength = INT_MAX, minStart = 0, minEnd = 0;

    // Loop through the string and find the words
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == ' ' || a[i] == '\0') {
            end = i;
            if (end - start < minLength && end - start > 0) {
                minLength = end - start;
                minStart = start;
                minEnd = end;
            }
            start = i + 1;
        }
    }

    // Check the last word in case the string does not end with a space
    if (a[i - 1] != ' ' && i - start < minLength) {
        minStart = start;
        minEnd = i;
    }

    // Print the shortest word
    if (minLength != INT_MAX) {
        for (i = minStart; i < minEnd; i++) {
            printf("%c", a[i]);
        }
    } else {
        printf("-");
    }

    return 0;
}
