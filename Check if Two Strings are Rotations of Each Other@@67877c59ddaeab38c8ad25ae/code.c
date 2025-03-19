// Your code here...
#include <stdio.h>
#include <string.h>

// Function to check if one string is a rotation of another
int isRotation(char str1[], char str2[]) {
    // If lengths of the strings are not equal, they can't be rotations
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Concatenate str1 to itself
    char temp[strlen(str1) * 2 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
        return 1;  // str2 is a rotation of str1
    }

    return 0;  // str2 is not a rotation of str1
}

int main() {
    char str1[100], str2[100];
    
    // Read input strings
    scanf("%s", str1);
    scanf("%s", str2);
    
    // Check if one string is a rotation of another
    if (isRotation(str1, str2)) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}
