// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    fgets(a, sizeof(a), stdin);

    // Remove newline character that fgets might add
    a[strcspn(a, "\n")] = '\0';

    int i, j = 0;
    
    // Iterate through the string and copy non-space characters
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != ' ') {  // Only copy non-space characters
            a[j++] = a[i];
        }
    }
    
    // Null-terminate the modified string
    a[j] = '\0';
    
    printf("%s\n", a);  // Print the string with spaces removed
    return 0;
}
