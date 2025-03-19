// Your code here...
#include <stdio.h>

int main() {
    char a[100]; // We will store the input as a string
    int i, isBinary = 1; // isBinary flag will indicate if the number is binary or not

    // Read input number as a string
    scanf("%s", a);

    // Check each character to ensure it's either '0' or '1'
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != '0' && a[i] != '1') {
            isBinary = 0; // If we find a non-binary character, set flag to 0
            break;
        }
    }

    // Output the result
    if (isBinary) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
